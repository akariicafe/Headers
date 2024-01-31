@class NSXPCConnection;

@interface CLHarvester : NSObject {
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (void)connect;
- (id)currentStateDictionary;
- (void)submitSample:(id)a0;

@end
