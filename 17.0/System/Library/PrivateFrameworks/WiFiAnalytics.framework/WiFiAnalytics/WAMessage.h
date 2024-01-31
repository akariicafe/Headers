@class NSString, NSMutableDictionary;

@interface WAMessage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *metricName;
@property (copy, nonatomic) NSMutableDictionary *metricInfo;
@property (nonatomic) long long options;

- (void)addFieldForKey:(id)a0 value:(id)a1 options:(long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMetricName:(id)a0 options:(long long)a1;
- (void).cxx_destruct;
- (void)addFieldsFromDictionary:(id)a0 options:(long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addFieldsForChannelFlagLikeKey:(id)a0 value:(id)a1 options:(long long)a2;

@end
