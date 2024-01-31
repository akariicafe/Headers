@class NSArray;

@interface WFWorkoutTrigger : WFTrigger

@property (nonatomic) unsigned long long selection;
@property (copy, nonatomic) NSArray *selectedWorkoutTypes;
@property (nonatomic) BOOL onStart;
@property (nonatomic) BOOL onEnd;

+ (id)localizedDisplayName;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isUserInitiated;
+ (BOOL)isSupportedOnThisDevice;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)offIcon;
+ (id)onLabel;
+ (id)displayGlyphHierarchicalColors;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;
+ (id)offLabel;
+ (id)onIcon;
+ (id)stopColor;
+ (id)workoutColors;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;
- (id)suggestedActions;

@end
