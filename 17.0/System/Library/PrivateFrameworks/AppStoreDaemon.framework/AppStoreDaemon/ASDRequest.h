@class NSUUID;
@protocol ASDRequestProxy, ASDRequestObserver;

@interface ASDRequest : NSObject <ASDRequestDelegate, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) id<ASDRequestProxy> proxy;
@property (weak) id<ASDRequestObserver> observer;
@property (readonly, nonatomic) NSUUID *requestID;

+ (void)cancelAllRequestsWithErrorHandler:(id /* block */)a0;
+ (id)_sharedBroker;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_cancelWithErrorHandler:(id /* block */)a0;
- (void)_startWithErrorHandler:(id /* block */)a0;
- (void)receiveResponse:(id)a0;

@end
