@interface PPSMetricMonitorConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long mode;
@property (nonatomic) double updateInterval;
@property (nonatomic) BOOL updateDelegate;
@property (nonatomic) BOOL emitSignposts;

+ (id)defaultConfiguration;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithMode:(long long)a0 updateInterval:(double)a1 updateDelegate:(BOOL)a2;

@end
