@class NSString, UNSAtomicDataContentProtectionStrategy, UNSFileHandleContentProtectionStrategy;
@protocol UNSHybridContentProtectionStrategyDelegate;

@interface UNSHybridContentProtectionStrategy : NSObject <UNSContentProtectionStrategy> {
    id<UNSHybridContentProtectionStrategyDelegate> _delegate;
    NSString *_minimumProtection;
    BOOL _needsMerge;
    UNSAtomicDataContentProtectionStrategy *_protectedContentAvailableStrategy;
    UNSFileHandleContentProtectionStrategy *_protectedContentUnavailableStrategy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isProtectedDataAvailable;
- (void)importDataWithImportHandler:(id /* block */)a0;
- (BOOL)_mergeIsSupported;
- (void)migrateDataAtPath:(id)a0 toPath:(id)a1;
- (id)initWithFileProtectionType:(id)a0 excludeFromBackup:(BOOL)a1 delegate:(id)a2;
- (BOOL)dataIsAvailableAtPath:(id)a0;
- (BOOL)removeItemAtPath:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)_strategyForProtectionState;
- (BOOL)writeData:(id)a0 atPath:(id)a1 error:(id *)a2;
- (id)dataAtPath:(id)a0;

@end
