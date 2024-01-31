@class NSUUID, SidecarService, NSObject, SidecarDevice;
@protocol OS_dispatch_queue, SidecarSessionDelegate;

@interface SidecarSession : NSObject {
    SidecarDevice *_device;
    SidecarService *_service;
    long long _transport;
    long long _dataLink;
    long long _handle;
    unsigned char _isRemote : 1;
    _Atomic long long _state;
}

@property (readonly) long long handle;
@property (readonly) NSUUID *uuid;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) long long transport;
@property (readonly, nonatomic) int dataLink;
@property (weak) id<SidecarSessionDelegate> delegate;
@property (readonly, nonatomic) SidecarDevice *device;
@property (readonly, nonatomic) SidecarService *service;

- (id)init;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)_closeWithError:(id)a0;
- (void)sendMessage:(id)a0 completion:(id /* block */)a1;
- (void)closeWithError:(id)a0 completion:(id /* block */)a1;
- (id)initWithService:(id)a0 device:(id)a1;
- (void)connectWithTransport:(long long)a0 reconnectToSession:(id)a1;
- (id)initWithRemote:(id)a0 device:(id)a1 dataLink:(int)a2 service:(id)a3 error:(id *)a4;
- (void)listenForStreamType:(long long)a0 flags:(unsigned long long)a1 identifier:(id)a2 processUniqueID:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)openStreamForType:(long long)a0 flags:(unsigned long long)a1 identifier:(id)a2 processUniqueID:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)timeSyncWithCompletion:(id /* block */)a0;

@end
