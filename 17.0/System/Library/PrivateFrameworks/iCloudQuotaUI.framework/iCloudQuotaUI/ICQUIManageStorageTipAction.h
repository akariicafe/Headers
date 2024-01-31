@class NSString, NSURL;

@interface ICQUIManageStorageTipAction : NSObject

@property (readonly, copy, nonatomic) NSString *actionButtonText;
@property (readonly, copy, nonatomic) NSString *actionName;
@property (readonly, nonatomic) NSURL *actionURL;

+ (id)actionsFromActionInfos:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initFromActionInfo:(id)a0;
- (id)initFromRUITableViewRow:(id)a0;

@end
