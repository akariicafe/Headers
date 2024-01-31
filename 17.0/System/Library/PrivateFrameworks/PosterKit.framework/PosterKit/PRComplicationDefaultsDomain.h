@interface PRComplicationDefaultsDomain : BSAbstractDefaultDomain

@property (nonatomic) BOOL hasShownPortraitEducation;
@property (nonatomic) BOOL hasShownLandscapeEducation;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
