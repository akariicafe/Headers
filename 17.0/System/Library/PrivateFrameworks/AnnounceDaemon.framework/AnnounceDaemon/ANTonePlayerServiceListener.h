@class NSXPCListener, NSString, ANTonePlayer;

@interface ANTonePlayerServiceListener : NSObject <ANTonePlayerServiceInterface, NSXPCListenerDelegate>

@property (retain, nonatomic) ANTonePlayer *player;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanForExit;
- (id)init;
- (id)_fileURLForTone:(unsigned long long)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)playTone:(unsigned long long)a0 audioSessionID:(unsigned int)a1 endpointUUID:(id)a2 completionHandler:(id /* block */)a3;

@end
