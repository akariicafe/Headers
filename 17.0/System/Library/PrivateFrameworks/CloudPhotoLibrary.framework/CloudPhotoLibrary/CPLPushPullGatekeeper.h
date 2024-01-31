@class CPLEngineStore;

@interface CPLPushPullGatekeeper : NSObject

@property (readonly, weak, nonatomic) CPLEngineStore *store;

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (long long)checkPushedChange:(id)a0;

@end
