@class NSUUID, NSDate, NSString, NSArray, HMDUser, HMFPairingIdentity, HMDSecureRemoteStreamInternal, HMDDevice, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface HMDSecureRemoteStream : HMFMessageTransport <HMFLogging, HMFObject> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) HMDDevice *peerDevice;
@property (retain, nonatomic) HMDUser *peer;
@property (retain, nonatomic) HMFPairingIdentity *peerIdentity;
@property (retain, nonatomic) HMDSecureRemoteStreamInternal *remoteSession;
@property (readonly, nonatomic) HMDDevice *currentDevice;
@property (nonatomic) BOOL supportsSharedIdentities;
@property (readonly) long long role;
@property (readonly, copy) NSNumber *maximumRemoteStreams;
@property long long qualityOfService;
@property (readonly, getter=isOpen) BOOL open;
@property (readonly, getter=isAuthenticated) BOOL authenticated;
@property (readonly, getter=isIdle) BOOL idle;
@property (readonly, copy) NSDate *lastActivity;
@property (readonly, copy, nonatomic) NSUUID *sessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)logCategory;

- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)setAuthenticated:(BOOL)a0;
- (void)dealloc;
- (void)setOpen:(BOOL)a0;
- (void)stop;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_closeWithError:(id)a0;
- (void)__handleAccountRemovedFromRegistry:(id)a0;
- (void)__handleDeviceRemovedFromAccount:(id)a0;
- (void)__handleRemovedIdentity:(id)a0;
- (void)_configureWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)closedWithError:(id)a0;
- (void)handleCompletedMessage:(id)a0 options:(id)a1 responsePayload:(id)a2 error:(id)a3 completionHandler:(id /* block */)a4;
- (void)handleSecureMessage:(id)a0 fromDevice:(id)a1 fromTransport:(id)a2;
- (id)initWithCurrentDevice:(id)a0 peerDevice:(id)a1 clientMode:(BOOL)a2 sessionID:(id)a3 accountRegistry:(id)a4;
- (void)setIdle:(BOOL)a0;
- (void)setMaximumRemoteStreams:(id)a0;
- (void)startAndInvokeOnQueue:(id)a0 completionHandler:(id /* block */)a1;

@end
