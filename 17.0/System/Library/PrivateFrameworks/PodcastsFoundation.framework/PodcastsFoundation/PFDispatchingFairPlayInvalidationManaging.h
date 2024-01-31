@interface PFDispatchingFairPlayInvalidationManaging : NSObject <PFFairPlayInvalidationManaging> {
    void /* unknown type, empty encoding */ responseQueue;
    void /* unknown type, empty encoding */ wrappedInstance;
}

+ (id)invalidationManager:(id)a0 receivingCallbacksOnQueue:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)invalidateFairPlayKeyFor:(long long)a0 completion:(id /* block */)a1;
- (void)markAllFairPlayKeysForInvalidationWithShouldRemove:(BOOL)a0 completion:(id /* block */)a1;
- (void)markKeyForInvalidationAt:(id)a0 shouldRemove:(BOOL)a1;
- (void)removalAllFairPlayKeysWithCompletion:(id /* block */)a0;
- (id)removeKeyFor:(id)a0;

@end
