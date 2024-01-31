@class NSString, BSSettings, BSKeyedSettings;

@interface FBSSettings : NSObject <FBSSettingsSubclass, BSXPCSecureCoding, BSXPCCoding, BSDescriptionProviding, FBSSettings, NSCopying, NSMutableCopying> {
    BSKeyedSettings *_settings;
    BSKeyedSettings *_localSettings;
    BSSettings *_legacyLocalSettings;
    BSSettings *_legacyOtherSettings;
    Class _mutabilityLock;
    FBSSettings *_progenitor;
    BOOL _mutable;
    BOOL _needsCoW;
}

@property (readonly, copy, nonatomic) BSSettings *otherSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_settingsExtensionsForSceneExtension:(Class)a0;
+ (void)initialize;
+ (Class)_mutableClass;
+ (BOOL)supportsBSXPCSecureCoding;
+ (Class)subclassExtension;
+ (Class)_baseClass;
+ (id)_descriptionProvider;
+ (Class)_counterpartClass;
+ (Class)_diffClass;
+ (id)_legacyDescriptionProvider;
+ (void)_setCounterpartClass:(Class)a0;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (void)setValue:(id)a0 forProperty:(SEL)a1;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)succinctDescriptionBuilder;
- (id)copy:(id /* block */)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isEmpty;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithSettings:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueForProperty:(SEL)a0 expectedClass:(Class)a1;
- (BOOL)settings:(id)a0 appendDescriptionToBuilder:(id)a1 forFlag:(long long)a2 object:(id)a3 ofSetting:(unsigned long long)a4;
- (id)settings:(id)a0 valueDescriptionForFlag:(long long)a1 object:(id)a2 ofSetting:(unsigned long long)a3;
- (BOOL)appendDescriptionToBuilder:(id)a0 forFlag:(long long)a1 object:(id)a2 ofSetting:(unsigned long long)a3;
- (id)settings:(id)a0 keyDescriptionForSetting:(unsigned long long)a1;
- (void)_addSceneExtension:(Class)a0;
- (void)_addSceneExtension:(Class)a0 applyingSettings:(id)a1;
- (id)_allSceneExtensions;
- (void)_appendToDescriptionBuilder:(id)a0;
- (id)_copyClearingProgenitor:(id /* block */)a0;
- (BOOL)_hasAdditionalDescription;
- (BOOL)_isEmptyForCoding:(BOOL)a0;
- (BOOL)_isEqualToSettings:(id)a0;
- (void)_lockMutabilityToExtension:(Class)a0 inBlock:(id /* block */)a1;
- (id)_progenitor;
- (void)_removeAllSceneExtensions;
- (void)_removeSceneExtension:(Class)a0;
- (void)_removeSettingsExtension:(Class)a0;
- (void)_removeVolatileSettings;
- (id)_sceneExtensionNames;
- (id)_unitTestRealValueForProperty:(SEL)a0;
- (BOOL)conformsToExtension:(Class)a0;
- (id)mutableCopy:(id /* block */)a0;

@end
