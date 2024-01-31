@class NSDate;

@interface _HKRateLimiterOperationRecord : NSObject

@property (readonly, copy) NSDate *datePerformed;
@property (readonly) unsigned long long cost;

- (void).cxx_destruct;

@end
