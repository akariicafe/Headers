@class NSString, ASDServiceBroker;

@interface ASDTestFlightFeedback : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)interface;

- (id)init;
- (void).cxx_destruct;
- (id)getDisplayNamesForBundleID:(id)a0;
- (id)getDisplayNamesForBundleURL:(id)a0;
- (id)getEmailAddressForBundleID:(id)a0;
- (id)getEmailAddressForBundleURL:(id)a0;
- (void)getFeedbackMetadataForBundleID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getFeedbackMetadataForBundleURL:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)getLaunchInfoForBundleID:(id)a0;
- (void)getLaunchInfoForBundleID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)getLaunchInfoForBundleURL:(id)a0;
- (void)getLaunchInfoForBundleURL:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)getLaunchInfoForVersion:(id)a0;
- (BOOL)isFeedbackEnabledForBundleID:(id)a0;
- (BOOL)isFeedbackEnabledForBundleURL:(id)a0;
- (BOOL)isLaunchScreenEnabledForBundleID:(id)a0;
- (BOOL)isLaunchScreenEnabledForBundleURL:(id)a0;
- (void)setFeedbackEnabled:(BOOL)a0 forVersion:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setLaunchInfo:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setLaunchScreenEnabled:(BOOL)a0 forVersion:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)submitFeedback:(id)a0 bundleURL:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)submitFeedback:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)updateTestNotes:(id)a0 forVersion:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
