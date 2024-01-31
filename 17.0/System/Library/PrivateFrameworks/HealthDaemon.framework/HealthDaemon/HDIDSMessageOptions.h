@interface HDIDSMessageOptions : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) double timeoutInterval;

+ (double)HDIDSMessageOptionsMaxMessageTimeout;
+ (id)defaultOptionsWithPriority:(unsigned long long)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPriority:(unsigned long long)a0 timeoutInterval:(double)a1;

@end
