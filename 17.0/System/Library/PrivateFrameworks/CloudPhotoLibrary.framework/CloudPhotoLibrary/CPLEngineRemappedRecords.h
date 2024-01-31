@class NSString, NSMutableDictionary, CPLPlatformObject;

@interface CPLEngineRemappedRecords : CPLEngineStorage <CPLAbstractObject> {
    NSMutableDictionary *_perTransactionRemappedScopedIdentifiers;
}

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)removeRemappedRecordWithScopedIdentifier:(id)a0 error:(id *)a1;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (BOOL)isRecordWithScopedIdentifierRemapped:(id)a0;
- (BOOL)addRemappedRecordWithScopedIdentifier:(id)a0 realScopedIdentifier:(id)a1 error:(id *)a2;
- (unsigned long long)scopeType;
- (id)scopedIdentifiersRemappedToScopedIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)writeTransactionDidFail;
- (id)_fixupRemappedRecordsAndReturnBestCloudScopedIdentifierFromRemappedScopedIdentifiers:(id)a0 fallback:(id)a1;
- (void)writeTransactionDidSucceed;
- (id)realScopedIdentifierForRemappedScopedIdentifier:(id)a0;

@end
