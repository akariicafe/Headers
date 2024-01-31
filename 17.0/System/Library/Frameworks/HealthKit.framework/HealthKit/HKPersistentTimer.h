@class NSString;

@interface HKPersistentTimer : NSObject

@property (retain, nonatomic) NSString *fullTimerKey;

+ (id)_prefixedKeyWithTimerKey:(id)a0;
+ (id)timerWithKey:(id)a0;

- (void)clear;
- (id)timerValue;
- (void)start;
- (unsigned long long)elapsedNanoseconds;
- (void).cxx_destruct;
- (unsigned long long)elapsedSeconds;

@end
