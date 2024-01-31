@class NSSet;

@interface SBAlwaysOnPolicySettings : PTSettings

@property (nonatomic) BOOL semanticTypeCustom;
@property (nonatomic) BOOL semanticTypeDefault;
@property (nonatomic) BOOL semanticTypeSleep;
@property (nonatomic) BOOL semanticTypeDriving;
@property (nonatomic) BOOL semanticTypeExercise;
@property (nonatomic) BOOL semanticTypeWork;
@property (nonatomic) BOOL semanticTypePersonal;
@property (nonatomic) BOOL semanticTypeReading;
@property (nonatomic) BOOL semanticTypeGaming;
@property (nonatomic) BOOL semanticTypeMindfulness;
@property (nonatomic) long long focusStrategy;
@property (copy, nonatomic) NSSet *alwaysOnDisablingFocusSemanticTypes;

+ (id)_keyPathForSemanticTypeName:(id)a0;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)alwaysOnDisablingFocusSemanticTypes;
- (void)setAlwaysOnDisablingFocusSemanticTypes:(id)a0;

@end
