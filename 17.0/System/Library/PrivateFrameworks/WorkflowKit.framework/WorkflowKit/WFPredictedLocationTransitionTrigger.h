@interface WFPredictedLocationTransitionTrigger : WFTrigger

@property (nonatomic) unsigned long long destinationType;
@property (nonatomic) unsigned long long minutesBefore;

+ (id)localizedDisplayName;
+ (BOOL)supportsSecureCoding;
+ (long long)triggerBacking;
+ (id)displayGlyph;
+ (id)localizedDisplayExplanation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
