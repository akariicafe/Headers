@class NFCHardwareManager, NSString, NSNumber, NSObject;
@protocol NFTag, OS_dispatch_queue, NFCReaderSession;

@interface NFCTag : NSObject <NFCTag, NFCNDEFTag> {
    id<NFTag> _tag;
    NSNumber *_sessionKey;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _configuration;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long configuration;
@property (readonly, nonatomic) NFCHardwareManager *hardwareManager;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, weak, nonatomic) id<NFCReaderSession> session;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_MaxRetry;
+ (double)_MaxRetryInterval;

- (void)disconnect;
- (BOOL)isReadOnly;
- (unsigned long long)capacity;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (void)_setDelegateQueue:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)applicationData;
- (id)selectedAID;
- (id)systemCode;
- (BOOL)isEqualToNFTag:(id)a0;
- (id)historicalBytes;
- (void)_connectWithCompletionHandler:(id /* block */)a0;
- (void)_setSession:(id)a0;
- (id)asNFCISO7816Tag;
- (void)writeLockWithCompletionHandler:(id /* block */)a0;
- (BOOL)isNDEFFormatted;
- (BOOL)_connectWithSession:(id)a0 outError:(id *)a1;
- (BOOL)_disconnectWithError:(id *)a0;
- (id)_getInternalReaderSession;
- (void)_sendAPDU:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setTag:(id)a0;
- (void)_transceiveWithData:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_transceiveWithSession:(id)a0 sendData:(id)a1 receivedData:(id *)a2 error:(id *)a3;
- (id)asNFCFeliCaTag;
- (id)asNFCISO15693Tag;
- (id)asNFCMiFareTag;
- (void)dispatchOnDelegateQueueAsync:(id /* block */)a0;
- (id)initWithSession:(id)a0 tag:(id)a1 startupConfig:(long long)a2;
- (BOOL)isMatchingSession:(id)a0 outError:(id *)a1;
- (BOOL)proprietaryApplicationDataCoding;
- (void)queryNDEFStatusWithCompletionHandler:(id /* block */)a0;
- (void)readNDEFWithCompletionHandler:(id /* block */)a0;
- (void)writeNDEF:(id)a0 completionHandler:(id /* block */)a1;

@end
