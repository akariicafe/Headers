@class SBDeactivationSettings, NSString, SBActivationSettings;

@interface SBWorkspaceEntity : NSObject <NSCopying, SBActivationSettings, SBDeactivationSettings, BSDescriptionProviding, SBLayoutElementDescriptor> {
    NSString *_identifier;
}

@property (readonly, nonatomic) BOOL isPreviousWorkspaceEntity;
@property (readonly, nonatomic) BOOL isEmptyWorkspaceEntity;
@property (readonly, nonatomic) BOOL isHomeScreenEntity;
@property (nonatomic) long long layoutRole;
@property (readonly, nonatomic) SBActivationSettings *activationSettings;
@property (readonly, nonatomic) SBDeactivationSettings *deactivationSettings;
@property (readonly, nonatomic) BOOL supportsPresentationAtAnySize;
@property (readonly, nonatomic) BOOL supportsSplitView;
@property (readonly, nonatomic) BOOL wantsExclusiveForeground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) unsigned long long supportedLayoutRoles;
@property (readonly, nonatomic) unsigned long long layoutAttributes;
@property (readonly, nonatomic) Class viewControllerClass;
@property (readonly, copy, nonatomic) id /* block */ entityGenerator;

+ (id)entity;

- (void)clearDeactivationSettings;
- (void)setFlag:(long long)a0 forActivationSetting:(unsigned int)a1;
- (void)setObject:(id)a0 forActivationSetting:(unsigned int)a1;
- (id)init;
- (id)displayItemRepresentation;
- (id)deviceApplicationSceneEntity;
- (void)setObject:(id)a0 forDeactivationSetting:(unsigned int)a1;
- (BOOL)hasLayoutAttributes:(unsigned long long)a0;
- (void)applyActivationSettings:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyActivationSettings;
- (BOOL)isAnalogousToEntity:(id)a0;
- (id)applicationSceneEntity;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)copyDeactivationSettings;
- (id)objectForDeactivationSetting:(unsigned int)a0;
- (BOOL)isAppClipPlaceholderEntity;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)isDeviceApplicationSceneEntity;
- (BOOL)boolForDeactivationSetting:(unsigned int)a0;
- (void).cxx_destruct;
- (id /* block */)_generator;
- (BOOL)supportsLayoutRole:(long long)a0;
- (void)clearActivationSettings;
- (BOOL)boolForActivationSetting:(unsigned int)a0;
- (id)succinctDescription;
- (void)applyDeactivationSettings:(id)a0;
- (BOOL)_supportsLayoutRole:(long long)a0;
- (long long)flagForDeactivationSetting:(unsigned int)a0;
- (void)setFlag:(long long)a0 forDeactivationSetting:(unsigned int)a1;
- (long long)flagForActivationSetting:(unsigned int)a0;
- (id)appClipPlaceholderEntity;
- (BOOL)isApplicationSceneEntity;
- (id)objectForActivationSetting:(unsigned int)a0;
- (BOOL)representsSameLayoutElementAsDescriptor:(id)a0;
- (id)initWithIdentifier:(id)a0 displayChangeSettings:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
