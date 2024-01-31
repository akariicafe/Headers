@interface PFFairPlayInvalidationManager : NSObject <PFFairPlayInvalidationManaging> {
    void /* unknown type, empty encoding */ keyLoader;
    void /* unknown type, empty encoding */ sessionProvider;
    void /* unknown type, empty encoding */ episodeFetcher;
    void /* unknown type, empty encoding */ storageProvider;
    void /* unknown type, empty encoding */ internalQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)invalidateFairPlayKeyFor:(long long)a0 completion:(id /* block */)a1;
- (void)markAllFairPlayKeysForInvalidationWithShouldRemove:(BOOL)a0 completion:(id /* block */)a1;
- (void)markKeyForInvalidationAt:(id)a0 shouldRemove:(BOOL)a1;
- (void)removalAllFairPlayKeysWithCompletion:(id /* block */)a0;
- (id)removeKeyFor:(id)a0;

@end
