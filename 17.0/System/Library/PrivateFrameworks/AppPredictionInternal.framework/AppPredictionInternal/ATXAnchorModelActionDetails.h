@class NSString;

@interface ATXAnchorModelActionDetails : NSObject

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) long long paramHash;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBundleId:(id)a0 actionType:(id)a1 paramHash:(long long)a2;

@end
