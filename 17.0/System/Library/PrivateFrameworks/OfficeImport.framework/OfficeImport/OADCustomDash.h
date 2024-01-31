@class NSArray;

@interface OADCustomDash : OADDash {
    NSArray *mStops;
}

+ (id)defaultProperties;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStops:(id)a0;
- (id)stops;
- (BOOL)areStopsOverridden;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;

@end
