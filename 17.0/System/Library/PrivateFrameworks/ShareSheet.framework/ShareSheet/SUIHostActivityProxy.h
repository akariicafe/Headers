@class UIColor, NSUUID, UISUIActivityConfiguration, NSString, UIActivity, UIImage, NSAttributedString;

@interface SUIHostActivityProxy : UIActivity

@property (retain, nonatomic) UISUIActivityConfiguration *activityConfiguration;
@property (retain, nonatomic) NSUUID *hostActivityUUID;
@property (retain, nonatomic) NSString *activityTitle;
@property (copy, nonatomic) NSString *overrideActivityTitle;
@property (retain, nonatomic) NSString *activityType;
@property (retain, nonatomic) NSString *fallbackActivityType;
@property (nonatomic) struct CGSize { double width; double height; } preferredThumbnailSize;
@property (retain, nonatomic) NSString *positionBeforeActivityType;
@property (nonatomic) BOOL activitySupportsPromiseURLs;
@property (nonatomic) long long defaultSortGroup;
@property (nonatomic) BOOL appIsDocumentTypeOwner;
@property (nonatomic) BOOL wantsOriginalImageColor;
@property (nonatomic) BOOL isBuiltinDerived;
@property (nonatomic) BOOL showsInSystemActionGroup;
@property (retain, nonatomic) UIActivity *activity;
@property (retain, nonatomic) UIImage *activityImage;
@property (retain, nonatomic) UIImage *actionImage;
@property (retain, nonatomic) UIImage *activitySettingsImage;
@property (retain, nonatomic) NSString *systemImageName;
@property (retain, nonatomic) NSAttributedString *activityFooterText;
@property (retain, nonatomic) UIImage *activityStatusImage;
@property (retain, nonatomic) UIColor *activityStatusTintColor;
@property (readonly, nonatomic) NSUUID *activityUUID;

+ (id)activitiesForConfigurations:(id)a0;
+ (Class)activityProxyClassForActivityCategory:(long long)a0;
+ (id)newWithActivityConfiguration:(id)a0;

- (void).cxx_destruct;
- (id)debugDescription;
- (struct CGSize { double x0; double x1; })_thumbnailSize;
- (id)_activityImage;
- (id)_systemImageName;
- (void)performActivity;
- (BOOL)_isDisabled;
- (void)activityDidFinish:(BOOL)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_actionImage;
- (void)prepareWithActivityItems:(id)a0;
- (id)_beforeActivity;
- (id)_activityFooterText;
- (id)_activitySettingsImage;
- (id)_activityStatusImage;
- (id)_activityStatusTintColor;
- (BOOL)_activitySupportsPromiseURLs;
- (id)_activityTypeUsingFallbackActivityTypeIfNecessary;
- (BOOL)_appIsDocumentTypeOwner;
- (long long)_defaultSortGroup;
- (BOOL)_isBuiltinDerived;
- (BOOL)_showsInSystemActionGroup;
- (BOOL)_wantsOriginalImageColor;
- (id)initWithAttributesFromActivityConfiguration:(id)a0;

@end
