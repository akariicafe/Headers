@class _PASLock;

@interface ATXTrialAssets : NSObject {
    _PASLock *_lock;
}

- (id)init;
- (id)filePathForClass:(Class)a0;
- (BOOL)_cleanModelDirectory;
- (id)client;
- (void)addUpdateHandlerWithBlock:(id /* block */)a0;
- (id)dictionaryForClassName:(id)a0;
- (id)pathForLegacyResourcePath:(id)a0;
- (BOOL)clearStaleUnarchivedLevels;
- (void).cxx_destruct;
- (id)_unarchivedResourcePath;
- (id)dictionaryForClass:(Class)a0;
- (id)dictionaryForResource:(id)a0;
- (id)filePathForResource:(id)a0;
- (id)_unarchiveResource:(id)a0;
- (id)_treatmentId;
- (id)filePathForClassName:(id)a0;

@end
