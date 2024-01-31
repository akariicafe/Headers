@class NSString, SSDownloadAuthenticationSession, NSObject;
@protocol OS_dispatch_queue;

@interface SSDownloadAuthenticationChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSDownloadAuthenticationSession *_session;
}

@property (readonly) SSDownloadAuthenticationSession *authenticationSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performDefaultHandlingForAuthenticationChallenge:(id)a0;
- (void)dealloc;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)a0;
- (void)useCredential:(id)a0 forAuthenticationChallenge:(id)a1;
- (void)cancelAuthenticationChallenge:(id)a0;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)a0;
- (id)initWithAuthenticationSession:(id)a0;

@end
