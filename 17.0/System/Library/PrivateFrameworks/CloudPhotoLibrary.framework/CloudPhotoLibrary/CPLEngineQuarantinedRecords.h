@class NSString, CPLRejectedRecords, CPLPlatformObject, NSMutableArray;

@interface CPLEngineQuarantinedRecords : CPLEngineStorage <CPLAbstractObject> {
    CPLRejectedRecords *_rejectedRecords;
    unsigned long long _rejectedCount;
    BOOL _rejectedRecordsHasChanges;
    CPLRejectedRecords *_newRejectedRecords;
    unsigned long long _newRejectedCount;
    NSMutableArray *_quarantineMessages;
}

@property (class, readonly, nonatomic) unsigned long long quarantineRetryCount;

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (BOOL)removeQuarantinedRecordWithScopedIdentifier:(id)a0 notify:(BOOL)a1 error:(id *)a2;
- (BOOL)resetRejectedRecordsWithError:(id *)a0;
- (BOOL)addQuarantinedRecordWithScopedIdentifier:(id)a0 recordClass:(Class)a1 reason:(id)a2 error:(id *)a3;
- (BOOL)bumpRejectedRecords:(id)a0 error:(id *)a1;
- (unsigned long long)scopeType;
- (unsigned long long)countOfQuarantinedRecordsInScopeWithIdentifier:(id)a0;
- (unsigned long long)countOfQuarantinedRecords;
- (void).cxx_destruct;
- (Class)classForQuarantinedRecordWithScopedIdentifier:(id)a0;
- (void)writeTransactionDidFail;
- (BOOL)isRecordWithScopedIdentifierQuarantined:(id)a0;
- (BOOL)_quarantineRejectedRecords:(id)a0 error:(id *)a1;
- (void)writeTransactionDidSucceed;
- (void)_sendQuarantineFeedbackWithRecordClass:(Class)a0 reason:(id)a1;

@end
