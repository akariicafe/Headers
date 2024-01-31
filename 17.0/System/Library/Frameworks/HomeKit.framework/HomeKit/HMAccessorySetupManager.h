@class NSUUID, NSString, _HMContext;

@interface HMAccessorySetupManager : NSObject <HMFLogging> {
    _HMContext *_context;
}

@property (class, readonly, copy) NSUUID *UUID;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)failAccessorySetupWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)finishAccessorySetupWithCompletionHandler:(id /* block */)a0;
- (void)finishAccessorySetupWithSetupCompletedInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)performAccessorySetupUsingRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)resumeAccessorySetupWithUserInfo:(id)a0 completionHandler:(id /* block */)a1;

@end
