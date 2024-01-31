@class NSString, NSArray;

@interface SSShortcutResultBuilder : SSResultBuilder

@property (nonatomic) BOOL isBackgroundRunnable;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *alternateNames;
@property (retain, nonatomic) NSString *numberOfActionsString;
@property (retain, nonatomic) NSString *punchoutLabel;
@property (retain, nonatomic) NSString *userActivityRequiredString;
@property (retain, nonatomic) NSString *thumbnailURL;
@property (retain, nonatomic) NSString *settingsPreference;
@property (nonatomic) unsigned long long entityThumbnailDisplayStyle;
@property (retain, nonatomic) NSString *actionIdentifier;
@property (retain, nonatomic) NSString *domainIdentifier;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildAppTopHitEntityCardSection;
- (id)buildButtonItems;
- (BOOL)buildButtonItemsAreTrailing;
- (id)buildCommand;
- (id)buildDescriptions;
- (id)buildDetailedRowCardSection;
- (id)buildFootnote;
- (id)buildResult;
- (id)buildThumbnail;
- (id)buildTrailingThumbnail;
- (BOOL)isAlarmResult;
- (BOOL)resultShadowsSettingResult;

@end
