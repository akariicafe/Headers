@class NSString, NSDictionary;
@protocol IMDaemonProtocol;

@interface IMMultiplexedDaemonConnection : NSObject <IMDaemonMultiplexedConnectionManaging> {
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ onInvalidate;
    void /* unknown type, empty encoding */ onDeinit;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ capabilities;
@property (nonatomic, readonly) NSDictionary *context;
@property (nonatomic, readonly) id<IMDaemonProtocol> remoteProxy;
@property (nonatomic, readonly) id<IMDaemonProtocol> synchronousRemoteProxy;

- (id)init;
- (void)dealloc;
- (id)initWithLabel:(id)a0 capabilities:(unsigned long long)a1 context:(id)a2 onInvalidate:(id /* block */)a3 onDealloc:(id /* block */)a4;
- (void)connectWithCompletion:(void (^)(void))a0;
- (void)invalidate;
- (void)waitForSetup;
- (void).cxx_destruct;

@end
