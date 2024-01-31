@class NSString;

@interface ML3GreenTeaLogger : NSObject {
    NSString *_accessor;
    struct ct_green_tea_logger_s { } *_logger;
    double _lastLogTime;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (void)logOnceForAccessor:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)beginLogAccessInterval;
- (void)endLogAccessInterval;
- (id)initWithAccessorName:(id)a0;
- (void)logAccess;

@end
