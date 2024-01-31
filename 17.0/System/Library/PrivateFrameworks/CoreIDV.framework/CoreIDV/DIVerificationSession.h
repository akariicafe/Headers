@class DIVClient, NSError, DIVerificationSessionContext;

@interface DIVerificationSession : NSObject {
    DIVClient *_client;
    NSError *_configureError;
}

@property (readonly, nonatomic) DIVerificationSessionContext *context;

+ (void)concludeVerification:(id)a0;

- (id)initWithContext:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)performVerificationWithAttributes:(id)a0 completion:(id /* block */)a1;
- (void)shareVerificationResultWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)concludeVerification;
- (void)confirmVerificationCompletedWithFeedback:(id)a0;
- (void)getVerificationResultWithOptions:(id)a0 completion:(id /* block */)a1;

@end
