@class CDPDCircleController, CDPDSecureBackupController, AAFKeychainManager, CDPContext;
@protocol CDPDCircleProxy, CDPDSecureBackupProxy, CDPDOctagonTrustProxy;

@interface CDPDEscrowRecordController : NSObject <CDPDCircleDelegate, CDPDSecureBackupDelegate>

@property (readonly, nonatomic) AAFKeychainManager *keychainManager;
@property (readonly, nonatomic) CDPDCircleController *circleController;
@property (readonly, nonatomic) CDPDSecureBackupController *secureBackupController;
@property (readonly, nonatomic) CDPContext *context;
@property (readonly, nonatomic) id<CDPDCircleProxy> circleProxy;
@property (readonly, nonatomic) id<CDPDOctagonTrustProxy> octagonTrustProxy;
@property (readonly, nonatomic) id<CDPDSecureBackupProxy> secureBackupProxy;

- (BOOL)updateLastSilentEscrowRecordRepairAttemptDate:(id)a0 error:(id *)a1;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)performSilentEscrowRecordRepairWithCompletion:(id /* block */)a0;
- (void)shouldPerformSilentEscrowRecordRepairUsingCache:(BOOL)a0 completion:(id /* block */)a1;
- (void)_beginSilentEscrowRecordRepairWithState:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_checkAllRecordsForCurrentDeviceUsingCache:(BOOL)a0 completion:(id /* block */)a1;
- (void)_checkAllRecordsForDeviceMatchingPredicate:(id)a0 source:(long long)a1 completion:(id /* block */)a2;
- (BOOL)_clearLastEscrowRepairAttemptDate:(id *)a0;
- (unsigned long long)_combinedCircleStatusUsingCache:(BOOL)a0 error:(id *)a1;
- (void)_continueSilentEscrowRecordRepairWithState:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_determineEligibilityForSilentRepairWithCompletion:(id /* block */)a0;
- (void)_deviceEscrowRecordStateUsingCache:(BOOL)a0 completion:(id /* block */)a1;
- (void)_escrowRecordStateForDevice:(id)a0 usingCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)_fetchAllEscrowRecordsFromSource:(long long)a0 completion:(id /* block */)a1;
- (id)_firstUsableRecordForCurrentPeerWithSerialNumber:(id)a0 fromRecords:(id)a1;
- (BOOL)_isEligibleForEscrowRecordOperationsWithError:(id *)a0;
- (BOOL)_isEscrowRecordRepairPermitted;
- (id)_lastEscrowRepairAttemptDate:(id *)a0;
- (id)_lastEscrowRepairAttemptDateDescriptor;
- (void)_performSilentEscrowRecordRepairWithCompletion:(id /* block */)a0;
- (id)_predicateForRecordWithPeerID:(id)a0;
- (BOOL)_setLastEscrowRepairAttemptDate:(id)a0 error:(id *)a1;
- (void)_shouldPerformSilentEscrowRecordRepairUsingCache:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)_shouldPerformSilentRepairForEscrowRecordState:(unsigned long long)a0;
- (void)_tlkRecoveryViewsForRecord:(id)a0 usingCache:(BOOL)a1 completion:(id /* block */)a2;
- (void)circleController:(id)a0 secureBackupRecordsArePresentWithCompletion:(id /* block */)a1;
- (id)circlePeerIDForSecureBackupController:(id)a0;
- (id)contextForController:(id)a0;
- (void)generateEscrowRecordStatusReportForLocalDeviceUsingCache:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)generateEscrowRecordStatusReportForLocalDeviceUsingFetchSource:(long long)a0 withCompletion:(id /* block */)a1;
- (id)initWithContext:(id)a0 circleProxy:(id)a1 octagonTrustProxy:(id)a2 secureBackupProxy:(id)a3;
- (void)promptForAdoptionOfMultipleICSCWithCompletion:(id /* block */)a0;
- (void)promptForLocalSecretWithCompletion:(id /* block */)a0;
- (id)secureChannelContextForController:(id)a0;
- (BOOL)synchronizeCircleViewsForSecureBackupContext:(id)a0;

@end
