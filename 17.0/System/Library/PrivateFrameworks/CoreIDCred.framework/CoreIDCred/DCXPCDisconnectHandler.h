@class NSString, NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface DCXPCDisconnectHandler : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableDictionary *disconnectCallbacks;
@property (retain, nonatomic) NSMutableDictionary *disconnectResultCallbacks;
@property (retain, nonatomic) NSMutableDictionary *disconnectOptionCallbacks;
@property (retain, nonatomic) NSMutableDictionary *disconnectBoolCallbacks;
@property (retain, nonatomic) NSString *disconnectErrorDomain;
@property (nonatomic) long long disconnectErrorCode;
@property (readonly, nonatomic) NSObject<OS_os_log> *logger;
@property (nonatomic) BOOL isDisconnected;

- (id)registerCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (void)handleInterruption;
- (void)configureHandlersForConnection:(id)a0;
- (void)unregisterOptionResultCallback:(id)a0;
- (id)createDaemonDisconnectedError;
- (id)initWithName:(id)a0 errorDomain:(id)a1 errorCode:(long long)a2 logger:(id)a3;
- (id)randomCallbackIdentifier;
- (id)registerOptionResultCallback:(id /* block */)a0;
- (id)registerResultCallback:(id /* block */)a0;
- (void)unregisterCallback:(id)a0;
- (void)unregisterResultCallback:(id)a0;
- (id)registerBoolResultCallback:(id /* block */)a0;
- (void)unregisterBoolResultCallback:(id)a0;

@end
