@class NSString, AMSRBSKeepAlive, NSObject;
@protocol OS_os_transaction;

@interface AMSKeepAlive : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    NSString *_logKey;
    AMSRBSKeepAlive *_rbsKeepAlive;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long style;

+ (void)rbs_keepAliveWithName:(id)a0 style:(long long)a1 block:(id /* block */)a2;
+ (BOOL)_isRBSAssertionsEnabled;
+ (id)rbs_keepAliveWithName:(id)a0 style:(long long)a1;
+ (void)keepAliveWithName:(id)a0 style:(long long)a1 block:(id /* block */)a2;
+ (void)_handleAssertionExpiration;
+ (id)rbs_keepAliveWithName:(id)a0;
+ (id)keepAliveWithFormat:(id)a0;
+ (id)keepAliveWithName:(id)a0 style:(long long)a1;
+ (id)keepAliveWithName:(id)a0;
+ (void)_accessAssertionCache:(id /* block */)a0;

- (void)dealloc;
- (void)rbs_invalidate;
- (id)_cacheKey;
- (id)initWithName:(id)a0 style:(long long)a1;
- (void)_takeOSTransaction;
- (id)initRBSWithName:(id)a0;
- (void)invalidate;
- (id)initWithName:(id)a0;
- (id)_assertionName;
- (id)initRBSWithName:(id)a0 style:(long long)a1;
- (void).cxx_destruct;
- (void)_removeProcessAssertion;
- (void)_takeProcessAssertion;
- (void)_removeOSTransaction;
- (void)_startLogTimer;

@end
