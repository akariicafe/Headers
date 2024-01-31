@class NSString, NSObject;
@protocol OS_xpc_object;

@interface IMRemoteObject : NSObject {
    id _internal;
}

@property (readonly, nonatomic) NSString *portName;
@property (retain, nonatomic) NSString *processName;
@property (nonatomic) int pid;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly, nonatomic) BOOL isValid;

+ (void)_unregisterIMRemoteObject:(id)a0;
+ (void)initialize;
+ (id)_remoteObjects;
+ (void)_registerIMRemoteObject:(id)a0;

- (void)_portDidBecomeInvalid;
- (void)setPortName:(id)a0;
- (void)_systemShutdown:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)_queue;
- (void)dealloc;
- (void)_cleanupMachBitsCanPost:(BOOL)a0 locked:(BOOL)a1;
- (void)blockUntilSendQueueIsEmpty;
- (void)invalidate;
- (id)initWithConnection:(id)a0 protocol:(id)a1;
- (id)initWithPortName:(id)a0 protocol:(id)a1;
- (id)initWithConnection:(id)a0 protocol:(id)a1 alreadyConfigured:(BOOL)a2 forceSecureCoding:(BOOL)a3;
- (unsigned long long)forwardXPCObject:(id)a0 messageContext:(id)a1 locked:(BOOL)a2;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (id)_initWithConnection:(id)a0 portName:(id)a1 protocol:(id)a2 alreadyConfigured:(BOOL)a3 forceSecureCoding:(BOOL)a4;
- (id)initWithConnection:(id)a0 protocol:(id)a1 alreadyConfigured:(BOOL)a2;

@end
