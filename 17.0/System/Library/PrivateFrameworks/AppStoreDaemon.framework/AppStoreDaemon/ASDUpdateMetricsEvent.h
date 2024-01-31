@class NSNumber;

@interface ASDUpdateMetricsEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *available;
@property (copy, nonatomic) NSNumber *discovery;
@property (copy, nonatomic) NSNumber *purchaseStart;
@property (copy, nonatomic) NSNumber *purchaseComplete;
@property (copy, nonatomic) NSNumber *downloadStart;
@property (copy, nonatomic) NSNumber *downloadComplete;
@property (copy, nonatomic) NSNumber *installStart;
@property (copy, nonatomic) NSNumber *installComplete;

+ (id)relativeMetricsKeys;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
