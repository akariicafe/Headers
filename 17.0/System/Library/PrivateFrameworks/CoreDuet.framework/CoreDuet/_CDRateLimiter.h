@class NSString, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface _CDRateLimiter : NSObject <_CDRateLimiting> {
    NSDate *_lastRecorded;
    long long _balance;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) double period;
@property (readonly) long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRateLimiter;

- (id)init;
- (id)initWithCount:(long long)a0 perPeriod:(double)a1;
- (BOOL)credit;
- (void)resetRateLimitWithTimeStamp:(id)a0;
- (void).cxx_destruct;
- (void)recordTimeAndRefillIfNeeded;
- (BOOL)debited;

@end
