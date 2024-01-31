@class NSString, NSXPCConnection;

@interface RERemoteTrainingServer : NSObject <RERemoteTrainingServerInterface> {
    NSXPCConnection *_connection;
    NSString *_processName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_clearConnection;
- (void).cxx_destruct;
- (void)_queue_setupConnectionIfNeeded;
- (id)initWithTargetProcessName:(id)a0;
- (void)performTrainingWithElements:(id)a0 events:(id)a1 interactions:(id)a2 completion:(id /* block */)a3;
- (void)updateRemoteAttribute:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;

@end
