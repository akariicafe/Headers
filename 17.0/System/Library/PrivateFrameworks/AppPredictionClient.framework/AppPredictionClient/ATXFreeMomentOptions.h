@interface ATXFreeMomentOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double durationHint;
@property (readonly, nonatomic) unsigned long long matchingOptions;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDurationHint:(double)a0 matchingOptions:(unsigned long long)a1;

@end
