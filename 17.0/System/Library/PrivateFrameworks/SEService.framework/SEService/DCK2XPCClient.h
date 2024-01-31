@class NSXPCConnection;

@interface DCK2XPCClient : NSObject {
    NSXPCConnection *connection;
}

+ (id)sharedClient;

- (void).cxx_destruct;
- (id)connectToService;
- (id)getROP:(id *)a0;
- (id)suspendRanging:(id)a0;
- (void)connectionResetHandler;
- (id)enableSMB:(id)a0 error:(id *)a1;
- (id)passThrough:(id)a0 keyIdentifier:(id)a1;
- (id)requestBTPairing:(id)a0;
- (id)setUWBConfigData:(id)a0;
- (id)setUWBDebugOptions:(unsigned long long)a0;
- (id)setUWBStartTimeOffsetMS:(unsigned long long)a0;

@end
