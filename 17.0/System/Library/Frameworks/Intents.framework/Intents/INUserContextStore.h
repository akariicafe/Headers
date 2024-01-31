@class CKKnowledgeStore;

@interface INUserContextStore : NSObject {
    CKKnowledgeStore *_knowledgeStore;
}

+ (id)sharedStore;
+ (id)keyForBundleIdentifier:(id)a0 andType:(long long)a1;
+ (id)findDataInValue:(id)a0;
+ (id)keyPrefixForType:(long long)a0;

- (id)_init;
- (void).cxx_destruct;
- (id)_initWithKnowledgeStore:(id)a0;
- (void)removeUserContextOfClass:(Class)a0 forBundleIdentifier:(id)a1;
- (void)storeUserContext:(id)a0 forBundleIdentifier:(id)a1;
- (void)storeUserContextViaHelper:(id)a0 forBundleIdentifier:(id)a1;
- (void)userContextOfClass:(Class)a0 forBundleIdentifiers:(id)a1 withCompletion:(id /* block */)a2;
- (void)userContextOfClass:(Class)a0 withCompletion:(id /* block */)a1;

@end
