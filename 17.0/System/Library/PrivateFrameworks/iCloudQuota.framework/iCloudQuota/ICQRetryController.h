@class NSObject;
@protocol OS_dispatch_queue;

@interface ICQRetryController : NSObject {
    unsigned long long _numberOfAttempts;
    unsigned long long _maxNumberOfRetries;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _executionBlock;
}

@property (readonly, nonatomic) unsigned long long numberOfAttempts;

- (BOOL)executeBlock;
- (void).cxx_destruct;
- (id)initWithMaxNumberOfRetries:(unsigned long long)a0 block:(id /* block */)a1;
- (BOOL)retryAfterSeconds:(unsigned long long)a0;

@end
