@interface SiriKitFlow.AnonymousLNConnectionDelegate : NSObject <LNActionExecutorDelegate> {
    void /* unknown type, empty encoding */ continuation;
}

- (id)init;
- (void).cxx_destruct;
- (void)executor:(id)a0 needsValueWithRequest:(id)a1;
- (void)executor:(id)a0 didFinishWithResult:(id)a1 error:(id)a2;
- (void)executor:(id)a0 needsActionConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsConfirmationWithRequest:(id)a1;
- (void)executor:(id)a0 needsDisambiguationWithRequest:(id)a1;

@end
