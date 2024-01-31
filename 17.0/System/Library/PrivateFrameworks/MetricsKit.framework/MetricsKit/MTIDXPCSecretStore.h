@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MTIDXPCSecretStore : NSObject <MTIDSecretStore> {
    double _idleCountDown;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)setupXPCConnection;
- (id)debugInfo;
- (void).cxx_destruct;
- (id)newXPCConnection;
- (void)clearLocalData;
- (id)maintainSchemes:(id)a0 options:(id)a1;
- (id)resetSchemes:(id)a0 options:(id)a1;
- (id)secretForScheme:(id)a0 options:(id)a1;
- (id)syncForSchemes:(id)a0 options:(id)a1;

@end
