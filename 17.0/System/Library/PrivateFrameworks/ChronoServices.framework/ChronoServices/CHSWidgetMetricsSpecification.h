@class NSDictionary, NSString;

@interface CHSWidgetMetricsSpecification : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, BSDescriptionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *metricsByFamily;
@property (readonly, copy, nonatomic) NSDictionary *alternatesByFamily;
@property (readonly, nonatomic) unsigned long long families;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMetricsSpecification:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)metricsForFamily:(long long)a0;
- (void).cxx_destruct;
- (id)_initWithMetricsByFamily:(id)a0 alternates:(id)a1;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)alternateMetricsForFamily:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
