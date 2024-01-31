@class NSHashTable, MBDeviceTransferProgress, MBDeviceTransferTask, NSError, MBDeviceTransferConnectionInfo, NSObject, RPFileTransferSession, RBSAssertion;
@protocol OS_dispatch_queue, OS_voucher;

@interface BYDeviceMigrationManager : NSObject

@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isMigrating) BOOL migrating;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (retain, nonatomic) RPFileTransferSession *fileTransferSession;
@property (retain, nonatomic) MBDeviceTransferTask *deviceTransferTask;
@property (retain, nonatomic) RBSAssertion *processAssertion;
@property (nonatomic) struct __MKBAssertion { } *deviceLockAssertion;
@property (nonatomic) int passcodeChangeNotificationToken;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) MBDeviceTransferConnectionInfo *connectionInfo;
@property (retain, nonatomic) MBDeviceTransferProgress *progressInfo;
@property (nonatomic) unsigned long long bytesTransferred;
@property (nonatomic) unsigned long long filesTransferred;
@property (nonatomic) double durationOfTransfer;
@property (nonatomic) double durationOfRestore;
@property (nonatomic) long long cancellationCause;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *migrationQueue;
@property (retain, nonatomic) NSObject<OS_voucher> *clientVoucher;
@property (nonatomic) BOOL willMigrate;

+ (id)createDeviceTransferTask:(id)a0;

- (void)dealloc;
- (void)start;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)didCancel;
- (void).cxx_destruct;
- (void)didCompleteWithError:(id)a0;
- (BOOL)_hasAssertions;
- (void)_reacquireDeviceLockAssertion;
- (struct __MKBAssertion { } *)acquireDeviceLockAssertion;
- (void)cancelDeviceTransferTask;
- (void)cancelWithCause:(long long)a0;
- (id)initWithFileTranferSession:(id)a0;
- (void)releaseAssertions;
- (BOOL)requiresProcessAssertion;
- (void)restartDeviceTransferTask:(id)a0;
- (void)startDeviceTransferTask;
- (BOOL)takeAssertions;

@end
