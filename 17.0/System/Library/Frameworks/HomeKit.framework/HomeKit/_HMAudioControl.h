@class NSUUID, _HMContext, NSString, HMMediaSession, NSObject;
@protocol OS_dispatch_queue, _HMAudioControlDelegate;

@interface _HMAudioControl : NSObject <HMFMessageReceiver, HMObjectMerge> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) HMMediaSession *mediaSession;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (weak) id<_HMAudioControlDelegate> delegate;
@property float volume;
@property (getter=isMuted) BOOL muted;
@property (retain, nonatomic) _HMContext *context;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_unconfigure;
- (void).cxx_destruct;
- (id)messageDestination;
- (void)updateVolume:(float)a0 completionHandler:(id /* block */)a1;
- (void)__configureWithContext:(id)a0;
- (void)_handleAudioControlUpdated:(id)a0;
- (void)_registerNotificationHandlers;
- (void)_unconfigureContext;
- (id)initWithMediaSession:(id)a0;
- (BOOL)mergeFromNewObject:(id)a0;
- (void)updateMuted:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
