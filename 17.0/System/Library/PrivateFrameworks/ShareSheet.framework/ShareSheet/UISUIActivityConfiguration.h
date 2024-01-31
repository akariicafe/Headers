@class UIColor, NSString, NSUUID, UIImage, UIActivity, NSAttributedString;

@interface UISUIActivityConfiguration : NSObject <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *activityClassName;
@property (nonatomic) long long encodingType;
@property (retain, nonatomic) NSString *overrideTitle;
@property (retain, nonatomic) NSAttributedString *_activityFooterText;
@property (nonatomic) BOOL isCapabilityBasedActivity;
@property (readonly, nonatomic) NSUUID *activityUUID;
@property (readonly, nonatomic) long long activityCategory;
@property (readonly, nonatomic) NSString *activityTitle;
@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) NSString *fallbackActivityType;
@property (readonly, nonatomic) struct CGSize { double width; double height; } preferredThumbnailSize;
@property (readonly, nonatomic) BOOL activitySupportsPromiseURLs;
@property (readonly, nonatomic) long long defaultSortGroup;
@property (readonly, nonatomic) BOOL appIsDocumentTypeOwner;
@property (readonly, nonatomic) unsigned long long indexInApplicationDefinedActivities;
@property (retain, nonatomic) UIActivity *activity;
@property (readonly, nonatomic) BOOL wantsOriginalImageColor;
@property (readonly, nonatomic) BOOL isBuiltinDerived;
@property (readonly, nonatomic) BOOL showsInSystemActionGroup;
@property (readonly, nonatomic) UIImage *activityImage;
@property (readonly, nonatomic) UIImage *actionImage;
@property (readonly, nonatomic) UIImage *activitySettingsImage;
@property (readonly, nonatomic) BOOL isDisabled;
@property (readonly, nonatomic) UIImage *activityStatusImage;
@property (readonly, nonatomic) UIColor *activityStatusTintColor;
@property (readonly, nonatomic) NSString *systemImageName;
@property (readonly, nonatomic) NSString *defaultActivityTitle;
@property (readonly, nonatomic) NSString *positionBeforeActivityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)configurationForActivity:(id)a0 forRemoteUIService:(BOOL)a1;

- (id)_init;
- (id)activityTitle;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_collectPropertiesFromAttributesOfUnderlyingActivity:(id)a0 forRemoteUIService:(BOOL)a1;
- (void)_decodeBasicPropertiesWithCoder:(id)a0;
- (void)_decodeForEncodingByClassNameWithCoder:(id)a0;
- (void)_decodeForEncodingByPropertiesWithCoder:(id)a0;
- (void)_encodeBasicPropertiesWithCoder:(id)a0;
- (void)_encodeByClassNameWithCoder:(id)a0;
- (void)_encodeByPropertiesWithCoder:(id)a0;
- (void)_validateProperties;
- (id)initWithActivity:(id)a0 encodingType:(long long)a1 forRemoteUIService:(BOOL)a2;
- (void)updateConfigurationWithOverrideTitle:(id)a0;

@end
