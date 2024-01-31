@class NSString, _UIPhysicalButtonBehaviorOptions;

@interface _UIPhysicalButtonConfiguration : NSObject <BSXPCCoding, BSXPCSecureCoding, BSDebugDescriptionProviding, NSCopying, NSSecureCoding> {
    _UIPhysicalButtonBehaviorOptions *_behaviorOptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long _generation;
@property (nonatomic, setter=_setWantsSystemShellExclusivePriority:) BOOL _wantsSystemShellExclusivePriority;
@property (readonly, nonatomic) unsigned long long _button;
@property (readonly, nonatomic) unsigned long long _behavior;
@property (readonly, copy, nonatomic) _UIPhysicalButtonBehaviorOptions *_behaviorOptions;
@property (copy, nonatomic, setter=_setName:) NSString *_name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)_cameraShutterConfigurations;
+ (id)_cameraShutterConfigurationsWithOptions:(id)a0;
+ (id)_configurationWithPhysicalButton:(unsigned long long)a0 behavior:(unsigned long long)a1 behaviorOptions:(id)a2;
+ (id)_ringerButtonDynamicActionConfiguration;
+ (id)_volumeCameraShutterConfigurationsWithOptionsProvider:(id /* block */)a0;
+ (id)_volumeConfigurations;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
