@interface SBDefaultIconModelStore : SBIconModelPropertyListFileStore

@property (class, readonly) SBDefaultIconModelStore *sharedInstance;

- (id)init;
- (void)_deleteLegacyState;
- (BOOL)saveDesiredIconState:(id)a0 error:(id *)a1;
- (BOOL)deleteDesiredIconStateWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)loadDesiredIconState:(id *)a0;
- (id)loadCurrentIconState:(id *)a0;

@end
