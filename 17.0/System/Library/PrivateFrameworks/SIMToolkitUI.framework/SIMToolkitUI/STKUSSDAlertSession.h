@class NSXPCListener, NSString, NSXPCConnection, NSMutableArray;

@interface STKUSSDAlertSession : STKAlertSession <NSXPCListenerDelegate, STKUSSDHostCommunication> {
    BOOL _hasReceivedContent;
}

@property (readonly, nonatomic) NSXPCConnection *ussdConnection;
@property (readonly, nonatomic) NSMutableArray *connectionQueue;
@property (readonly, nonatomic) long long event;
@property (readonly, nonatomic) NSXPCListener *ussdListener;
@property (nonatomic) BOOL hasReceivedContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)wakeup;
- (id)initWithLogger:(id)a0 responseProvider:(id)a1 event:(long long)a2 options:(id)a3 sound:(id)a4;
- (void)performUSSDUpdate:(id /* block */)a0;

@end
