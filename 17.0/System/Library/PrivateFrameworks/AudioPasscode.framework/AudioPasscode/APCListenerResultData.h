@interface APCListenerResultData : NSObject

@property (nonatomic) unsigned long long completionTime;

- (void)reset;
- (BOOL)isValid;
- (id)initWithPasscodeDurationNSec:(unsigned long long)a0;

@end
