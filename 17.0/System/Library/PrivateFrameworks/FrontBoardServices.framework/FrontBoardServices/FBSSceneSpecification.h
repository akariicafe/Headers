@class NSArray, NSString;

@interface FBSSceneSpecification : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, nonatomic) Class hostAgentClass;
@property (readonly, nonatomic) Class clientAgentClass;
@property (readonly, nonatomic) Class settingsClass;
@property (readonly, nonatomic) Class clientSettingsClass;
@property (readonly, nonatomic) Class transitionContextClass;
@property (readonly, copy, nonatomic) NSArray *defaultExtensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)specification;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)isValid;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isSignificantTransitionContext:(id)a0;

@end
