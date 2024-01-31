@class NSString;
@protocol _GCDriverServerInterface;

@interface _GCDriverClientConnection : _GCIPCRemoteIncomingConnection <_GCDeviceDriverConnection>

@property (retain, nonatomic) id<_GCDriverServerInterface> exportedObject;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnection:(id)a0 fromProcess:(id)a1;
- (id)connectToDeviceService:(id)a0 withClient:(id)a1;
- (void)connectToDeviceService:(id)a0 withClient:(id)a1 reply:(id /* block */)a2;

@end
