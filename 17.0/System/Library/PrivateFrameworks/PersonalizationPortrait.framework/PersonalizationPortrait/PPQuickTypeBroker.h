@class NSString, PPXPCClientHelper, PPClientFeedbackHelper;

@interface PPQuickTypeBroker : NSObject <PPFeedbackAccepting, PPClientStore> {
    PPXPCClientHelper *_clientHelper;
    PPClientFeedbackHelper *_clientFeedbackHelper;
}

@property (retain, nonatomic) NSString *clientIdentifier;

+ (id)sharedInstance;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)_remoteObjectProxy;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)warmUpWithCompletion:(id /* block */)a0;
- (void)recentQuickTypeItemsForRecipients:(id)a0 completion:(id /* block */)a1;
- (void)quickTypeItemsWithLanguageModelingTokens:(id)a0 localeIdentifier:(id)a1 recipients:(id)a2 bundleIdentifier:(id)a3 limit:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)quickTypeItemsWithQuery:(id)a0 limit:(unsigned long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)hibernateWithCompletion:(id /* block */)a0;

@end
