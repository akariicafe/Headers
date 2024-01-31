@class HMHome, NSString, NAFuture;

@interface HULockAccessUpdateViewController : OBWelcomeController <HUPreloadableViewController>

@property (readonly, nonatomic) NAFuture *preloadFuture;
@property (readonly, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)hu_preloadContent;

@end
