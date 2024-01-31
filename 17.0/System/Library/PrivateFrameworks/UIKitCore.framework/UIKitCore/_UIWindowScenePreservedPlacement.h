@interface _UIWindowScenePreservedPlacement : UIWindowScenePlacement

@property (nonatomic) BOOL keepInBackground;

+ (unsigned long long)_placementType;

- (id)init;
- (id)_init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_preserveLayout;
- (id)_createConfigurationWithError:(id *)a0;
- (BOOL)_requestBackground;

@end
