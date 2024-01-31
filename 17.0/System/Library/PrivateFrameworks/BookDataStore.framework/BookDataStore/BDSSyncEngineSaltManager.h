@class NSString, NSData, NSObject, CKDatabase;
@protocol OS_dispatch_queue, BDSSyncEngineSaltManagerObserver;

@interface BDSSyncEngineSaltManager : NSObject <BCCloudDataPrivacyDelegate>

@property (retain, nonatomic) CKDatabase *database;
@property (retain, nonatomic) NSData *currentSalt;
@property (retain, nonatomic) NSString *currentSaltVersionIdentifier;
@property (weak, nonatomic) id<BDSSyncEngineSaltManagerObserver> observer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) BOOL isSaltRefreshInProgress;
@property (readonly) NSString *establishedSaltVersionIdentifier;

- (void).cxx_destruct;
- (BOOL)establishedSalt;
- (void)wq_refreshSalt:(id /* block */)a0;
- (void)_updatedReachability;
- (id)_wq_saltedAndHashedIDFromLocalID:(id)a0;
- (id)initWithDatabase:(id)a0 observer:(id)a1;
- (void)invalidateSalt;
- (id)recordNameFromRecordType:(id)a0 identifier:(id)a1;
- (void)refreshSalt:(id /* block */)a0;
- (void)refreshSaltIfNeeded:(id /* block */)a0;
- (void)wq_invalidateSalt;

@end
