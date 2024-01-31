@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface PSGWordBoundaryFSTGrammar : NSObject {
    NSCache *_lmWrapperCache;
    NSObject<OS_dispatch_queue> *_lmWrapperQueue;
}

+ (id)sharedInstance;

- (id)_getLMWrapper:(id)a0;
- (id)init;
- (void *)_createLexicon:(id)a0;
- (id)triggerAttributesForContext:(id)a0 localeIdentifier:(id)a1;
- (void *)_createLanguageModel:(id)a0;
- (id)getOTAPathForProactiveBundle:(id)a0;
- (void).cxx_destruct;
- (void)clearLMCache;
- (void)warmUpForLocaleIdentifier:(id)a0 waitForCompletion:(BOOL)a1;
- (id)_getPrimingToken:(void *)a0 transientTokenID:(unsigned int)a1;
- (void)warmUpForLocaleIdentifier:(id)a0;

@end
