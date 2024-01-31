@class PCSCKKSItemModifyContext;

@interface PCSCKKSCreateIdentityOperation : PCSCKKSOperation

@property (retain) PCSCKKSItemModifyContext *context;

- (void)start;
- (void).cxx_destruct;
- (int)addAndNotifyOnSync:(struct _PCSIdentityData { } *)a0 attributes:(struct __CFDictionary { } *)a1 returnAttributes:(const struct __CFDictionary **)a2 complete:(id /* block */)a3;
- (void)createPCSIdentity;
- (id)initWithItemModifyContext:(id)a0;
- (void)itemStored:(id)a0;
- (void)setIdentityToCurrent;
- (void)storePCSIdentity:(struct _PCSIdentityData { } *)a0;

@end
