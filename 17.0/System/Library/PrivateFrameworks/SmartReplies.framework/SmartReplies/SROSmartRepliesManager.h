@class _TtC12SmartReplies21SRSmartRepliesManager;

@interface SROSmartRepliesManager : NSObject {
    _TtC12SmartReplies21SRSmartRepliesManager *_backingManager;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)primeResponsesExperimentsIfNeeded;
- (id)suggestionsForRequest:(id)a0;
- (void)suggestionsForRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)registerResponse:(id)a0 forMessage:(id)a1 time:(id)a2 metadata:(id)a3 withLanguage:(id)a4;
- (void)registerResponseDisplayedAtIndex:(id)a0;
- (void)registerResponseDisplayedAtIndex:(id)a0 withDisplaySetting:(id)a1;

@end
