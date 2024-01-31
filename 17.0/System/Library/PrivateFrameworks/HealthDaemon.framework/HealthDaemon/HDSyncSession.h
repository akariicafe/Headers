@class NSUUID, NSString, NSCalendar, NSDate, HDAssertion, HDSyncPredicate;
@protocol HDSyncStore, HDSyncSessionDelegate;

@interface HDSyncSession : NSObject

@property (readonly, weak, nonatomic) id<HDSyncSessionDelegate> delegate;
@property (readonly, nonatomic) id<HDSyncStore> syncStore;
@property (readonly, copy, nonatomic) NSUUID *sessionUUID;
@property (readonly, copy, nonatomic) NSString *shortSessionIdentifier;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSCalendar *calendar;
@property (readonly, copy, nonatomic) NSString *reason;
@property (retain, nonatomic) HDAssertion *databaseAccessibilityAssertion;
@property (nonatomic) double databaseAccessibilityTimeout;
@property (readonly, copy, nonatomic) HDSyncPredicate *syncPredicate;

- (id)init;
- (BOOL)transactionDidEndWithError:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)syncDidFinishWithSuccess:(BOOL)a0 error:(id)a1;
- (id)excludedSyncIdentities;
- (id)excludedSyncStores;
- (id)initWithSyncStore:(id)a0 reason:(id)a1 delegate:(id)a2;
- (long long)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)a0;
- (long long)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)a0;
- (id)newChangeWithSyncEntityClass:(Class)a0 version:(struct { int x0; int x1; })a1;
- (BOOL)requiresSyncForChangesFromAnchorRangeMap:(id)a0;
- (void)sendChanges:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldOverrideCycleTrackingSymptomsForBackwardsCompatibilty;
- (BOOL)syncDidBeginWithProfile:(id)a0 error:(id *)a1;
- (void)syncWillBegin;
- (void)willSyncAnchorRanges:(id)a0;

@end
