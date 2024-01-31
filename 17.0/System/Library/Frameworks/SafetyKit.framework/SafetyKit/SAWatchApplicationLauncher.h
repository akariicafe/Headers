@class NSString;

@interface SAWatchApplicationLauncher : NSObject <SAApplicationLauncher>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)openApplicationInBackgroundWithBundleId:(id)a0 withReason:(long long)a1 completion:(id /* block */)a2;

@end
