@class NSString;

@interface ASDTFBetaAppLaunchDataProvider : NSObject <TFBetaAppLaunchDataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadLaunchScreenForBundleWithURL:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
