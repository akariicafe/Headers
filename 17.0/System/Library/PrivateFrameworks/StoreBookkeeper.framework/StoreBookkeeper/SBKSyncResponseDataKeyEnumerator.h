@class SBKSyncTransaction, SBKSyncResponseData, NSEnumerator;

@interface SBKSyncResponseDataKeyEnumerator : NSObject

@property (retain, nonatomic) SBKSyncResponseData *responseData;
@property (retain, nonatomic) SBKSyncTransaction *transaction;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL resolvedConflictsNeedSyncToServer;
@property (retain, nonatomic) NSEnumerator *updatedKeysEnumerator;
@property (retain, nonatomic) NSEnumerator *conflictedKeysEnumerator;
@property (retain, nonatomic) NSEnumerator *deletedKeysEnumerator;

- (void).cxx_destruct;
- (void)_processNextKey;
- (void)_processDeletedKey:(id)a0 isDirty:(BOOL *)a1;
- (void)_processUpdatedKey:(id)a0 isConflict:(BOOL)a1 isDirty:(BOOL *)a2;
- (void)enumerateKeysInResponseForTransaction:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithResponseData:(id)a0;

@end
