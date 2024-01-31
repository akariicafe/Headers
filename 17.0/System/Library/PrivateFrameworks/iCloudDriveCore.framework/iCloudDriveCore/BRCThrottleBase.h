@class NSString;

@interface BRCThrottleBase : NSObject {
    unsigned int _initialRetryCount;
    unsigned int _finalRetryCount;
    unsigned int _maximumElementCount;
    long long _minimumNsecsBetweenRetries;
    long long _maximumNsecsBetweenRetries;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long nsecsBeforeForgettingCounter;

- (void).cxx_destruct;
- (BOOL)isBlocking;
- (id)initWithName:(id)a0 andParameters:(id)a1;
- (long long)nsecsToNextRetry:(long long)a0 retryCount:(unsigned int *)a1 now:(long long)a2;
- (long long)retryBackoff:(unsigned int)a0;

@end
