@class NSString;

@interface PFTimeService : NSObject <PFTimeService>

@property (class, readonly) PFTimeService *defaultTimeService;

@property (readonly) double timeIntervalSinceReferenceDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sleepForTimeInterval:(double)a0;
- (unsigned long long)clock_gettime_nsec_np:(int)a0;

@end
