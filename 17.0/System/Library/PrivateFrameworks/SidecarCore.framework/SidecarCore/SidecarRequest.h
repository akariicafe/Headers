@class NSUUID, NSString, SidecarService, NSError, NSArray, SidecarDevice, NSData, SidecarTransferReceiver, SidecarMapTable, NSProgress, SidecarSession;
@protocol SidecarRequestDelegate, SidecarMessage;

@interface SidecarRequest : NSObject <SidecarTransferDelegate, SidecarSessionDelegate, NSProgressReporting> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_devices_deprecated;
    SidecarDevice *_device;
    SidecarSession *_session;
    SidecarSession *_sessionZombie;
    NSArray *_items;
    NSProgress *_progress;
    SidecarService *_service;
    SidecarTransferReceiver *_transferReceiver;
    SidecarMapTable *_sendTransfers;
    NSError *_error;
    _Atomic long long _state;
}

@property (readonly, nonatomic) BOOL didStart;
@property (nonatomic) double timeStart;
@property (nonatomic) double timeAccept;
@property (nonatomic) double timeTransfer;
@property (nonatomic) double timeFinish;
@property (weak) id<SidecarRequestDelegate> delegate;
@property (retain) NSError *error;
@property (readonly, nonatomic) id<SidecarMessage> message;
@property (readonly, nonatomic) SidecarSession *session;
@property (readonly) NSString *localizedItemName;
@property (readonly) NSUUID *uuid;
@property (readonly) SidecarService *service;
@property (copy) NSArray *devices;
@property (readonly, nonatomic) SidecarDevice *device;
@property (readonly) NSProgress *progress;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly) NSArray *items;
@property (readonly) NSString *localizedDescription;
@property (readonly) NSData *data;
@property (readonly) NSString *uniformTypeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)setItems:(id)a0;
- (id)device;
- (void)setDevices:(id)a0;
- (void)dealloc;
- (void)start;
- (id)items;
- (id)data;
- (id)devices;
- (void).cxx_destruct;
- (void)setError:(id)a0;
- (void)cancel;
- (id)error;
- (id)session;
- (void)accept;
- (void)_sendMessage:(id)a0;
- (id)initWithService:(id)a0 device:(id)a1;
- (id)sessionForDevice:(id)a0;
- (void)sidecarSession:(id)a0 closedWithError:(id)a1;
- (void)sidecarSession:(id)a0 receivedMessage:(id)a1;
- (void)_registerStreamListeners;
- (void)_willConnect;
- (id)initWithSession:(id)a0 message:(id)a1;
- (void)listenForStreamType:(long long)a0 flags:(unsigned long long)a1 identifier:(id)a2 processUniqueID:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)listenForStreamType:(long long)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)listenForStreamType:(long long)a0 identifier:(id)a1 processUniqueID:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)openStreamForType:(long long)a0 flags:(unsigned long long)a1 identifier:(id)a2 processUniqueID:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)openStreamForType:(long long)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)openStreamForType:(long long)a0 identifier:(id)a1 processUniqueID:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)sendItems:(id)a0;
- (void)sendItems:(id)a0 complete:(BOOL)a1;
- (void)sidecarServiceTerminate;
- (void)sidecarSessionStarted:(id)a0;
- (void)sidecarTransfer:(id)a0 didComplete:(id)a1;
- (void)sidecarTransfer:(id)a0 receivedItems:(id)a1 messageType:(long long)a2;
- (void)startWithTransport:(long long)a0;
- (void)startWithTransport:(long long)a0 reconnectToRequest:(id)a1;

@end
