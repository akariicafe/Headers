@class NSString, NSXPCConnection;

@interface AudioPlaybackHostingClientObject : NSObject <REAudioPlaybackHostingService>

@property (readonly) unsigned long long connectionIdentifier;
@property (readonly) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 connectionIdentifier:(unsigned long long)a1;

@end
