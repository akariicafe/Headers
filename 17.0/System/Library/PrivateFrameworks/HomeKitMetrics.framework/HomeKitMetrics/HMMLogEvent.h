@class NSError, NSDate;

@interface HMMLogEvent : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic, getter=isSubmitted) BOOL submitted;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) long long endTimeMilliseconds;
@property (retain) NSError *error;
@property (readonly) double durationInMilliseconds;
@property (retain) NSDate *startDate;
@property (readonly) long long tickBasedDurationInMilliseconds;
@property (readonly) long long startTimeMilliseconds;

+ (id)alloc;

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldSubmit;
- (void)markEndTime;
- (void)submitAtDate:(id)a0;

@end
