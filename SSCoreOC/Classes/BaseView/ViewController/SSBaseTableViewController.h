//
//  SSBaseTableViewController.h
//  AFNetworking
//
//  Created by ssp on 2020/4/24.
//

#import "SSBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface SSBaseTableViewController : SSBaseViewController<UITableViewDelegate , UITableViewDataSource>
/// The table view for tableView controller.
/// tableView
@property (nonatomic, readonly, weak) UITableView *tableView;

/// `tableView` 的内容缩进，default is UIEdgeInsetsMake(64,0,0,0)，you can override it
@property (nonatomic, readonly, assign) UIEdgeInsets contentInset;

/// reload tableView data , sub class can override
- (void)reloadData;

/// dequeueReusableCell
- (UITableViewCell *)tableView:(UITableView *)tableView dequeueReusableCellWithIdentifier:(NSString *)identifier forIndexPath:(NSIndexPath *)indexPath;

/// configure cell data
- (void)configureCell:(UITableViewCell *)cell atIndexPath:(NSIndexPath *)indexPath withObject:(id)object;
@end

NS_ASSUME_NONNULL_END
