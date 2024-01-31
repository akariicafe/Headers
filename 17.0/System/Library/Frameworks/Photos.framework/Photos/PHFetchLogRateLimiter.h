@class PFTokenBucket;

@interface PHFetchLogRateLimiter : NSObject {
    PFTokenBucket *_faultTokenBucket;
    PFTokenBucket *_errorTokenBucket;
    PFTokenBucket *_defaultTokenBucket;
}

@property (class, readonly) PHFetchLogRateLimiter *sharedRateLimiter;

- (id)init;
- (void).cxx_destruct;
- (unsigned char)rateLimitedLogForDefaultLog;
- (unsigned char)rateLimitedLogForErrorLog;
- (unsigned char)rateLimitedLogForFaultLog;
- (unsigned char)rateLimitedLogLevelForLogForLevel:(unsigned char)a0;

@end
