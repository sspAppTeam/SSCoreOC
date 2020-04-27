//
//  SSBaseModel.m
//  FBSnapshotTestCase
//
//  Created by ssp on 2020/4/23.
//

#import "SSBaseModel.h"

@implementation SSBaseModel
//统一处理赋值
- (void)setValue:(id)value forKey:(NSString *)key {
    [super setValue:value forKey:key];
//    统一对数字进行处理，此处不需要，注意：经纬度，金额 等非一个标准，所有不处理
//    [super setValue:[SSBaseModel change_Value:value] forKey:key];
}

+ (NSString *)change_Value:(id)value {
    if ([value isKindOfClass:[NSString class]]) {
        NSString *strte = [NSString stringWithFormat:@"%@",value];
           
           if ([SSBaseModel isERRDecimalsStr:strte]) {
               NSString *ster = [NSString stringWithFormat:@"%f",[value doubleValue]];//如果只要确保小数保留两位小数，这里就可以返回了
               return [SSBaseModel getMoneyTest:[ster doubleValue]];
           }
    }
   
    return value;
}
//判断是否是我们所要处理的数据
+ (BOOL)isERRDecimalsStr:(NSString*)text {
    
    NSString *ascRegex = @"^(\\+|\\-)?[0-9]+[.][0-9]{7,30}$";//一般我们的小数位都是6位，包括地理坐标，如果超过6位，就可能不正常了，可以按需求修改
    NSPredicate *ascTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", ascRegex];
    return [ascTest evaluateWithObject:text];
}
//将小数转化数字格式，取消掉小数位无用的0。如果你不需要，可以跳过
+ (NSString *)getMoneyTest:(float)money {
    NSNumberFormatter *numberFormatter = [[NSNumberFormatter alloc] init];
    
    numberFormatter.numberStyle = kCFNumberFormatterNoStyle;
    //整数最少位数
    numberFormatter.minimumIntegerDigits = 1;
    //小数位最多位数
    numberFormatter.maximumFractionDigits = 2;
    //小数位最少位数
    numberFormatter.minimumFractionDigits = 0;
    NSString *newAmount = [numberFormatter stringFromNumber:[NSNumber numberWithDouble:money]];
    return newAmount;
}
@end
