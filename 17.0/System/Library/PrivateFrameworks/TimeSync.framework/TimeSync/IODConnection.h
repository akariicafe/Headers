@class IOKNotificationPort, NSObject;
@protocol OS_dispatch_queue;

@interface IODConnection : NSObject {
    unsigned int _clientID;
    NSObject<OS_dispatch_queue> *_asyncCallbackQueue;
    IOKNotificationPort *_asyncCallbackPort;
    void /* function */ *_asyncCallback;
    unsigned long long _refcon;
}

+ (void)daemonClientRefresh;
+ (void)dispatchNotificationForClientID:(unsigned int)a0 ioResult:(int)a1 args:(const unsigned long long *)a2 numArgs:(unsigned int)a3;

- (id)init;
- (void)dealloc;
- (id)initWithService:(id)a0 andType:(unsigned int)a1;
- (BOOL)callMethodWithSelector:(unsigned int)a0 scalarInputs:(const unsigned long long *)a1 scalarInputCount:(unsigned int)a2 scalarOutputs:(unsigned long long *)a3 scalarOutputCount:(unsigned int *)a4 error:(id *)a5;
- (id)initWithService:(id)a0;
- (void).cxx_destruct;
- (BOOL)callMethodWithSelector:(unsigned int)a0 scalarInputs:(const unsigned long long *)a1 scalarInputCount:(unsigned int)a2 structInput:(const void *)a3 structInputSize:(unsigned long long)a4 scalarOutputs:(unsigned long long *)a5 scalarOutputCount:(unsigned int *)a6 error:(id *)a7;
- (BOOL)callMethodWithSelector:(unsigned int)a0 structInput:(const void *)a1 structInputSize:(unsigned long long)a2 error:(id *)a3;
- (BOOL)deregisterAsyncNotificationsWithSelector:(unsigned int)a0;
- (BOOL)registerAsyncNotificationsWithSelector:(unsigned int)a0 callBack:(void /* function */ *)a1 refcon:(unsigned long long)a2 callbackQueue:(id)a3;

@end
