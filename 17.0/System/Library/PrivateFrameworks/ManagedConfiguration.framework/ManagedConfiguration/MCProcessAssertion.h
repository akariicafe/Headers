@class NSString, NSObject;
@protocol OS_os_transaction;

@interface MCProcessAssertion : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly, nonatomic) NSString *reason;

- (id)initWithReason:(id)a0;
- (void)dealloc;
- (void)_releaseAssertion;
- (void)_createAssertion;
- (void).cxx_destruct;

@end
