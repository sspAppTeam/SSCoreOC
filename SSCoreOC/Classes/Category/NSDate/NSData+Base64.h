//
//
//  HealthCloud
//
//  Created by lihaibo on 15/10/26.
//  Copyright © 2015年 bomei. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface NSData (Base64)

+ (id)dataWithBase64EncodedString:(NSString *)string;     //  Padding '=' characters are optional. Whitespace is ignored.
- (NSString *)base64Encoding;

- (NSData *)base64Decoded;

@end
