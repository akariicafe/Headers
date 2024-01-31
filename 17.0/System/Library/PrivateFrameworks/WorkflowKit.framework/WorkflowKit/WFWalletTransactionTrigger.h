@class NSArray;

@interface WFWalletTransactionTrigger : WFTrigger

@property (retain, nonatomic) NSArray *selectedPassUniqueIDs;
@property (retain, nonatomic) NSArray *selectedMerchantTypes;
@property (retain, nonatomic) NSArray *selectedMerchants;

+ (id)localizedDisplayName;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isUserInitiated;
+ (BOOL)isSupportedOnThisDevice;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyph;
+ (id)localizedDisplayExplanation;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;
- (Class)shortcutInputContentItemClass;
- (id)suggestedActions;

@end
