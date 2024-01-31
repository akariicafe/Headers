@class NSString, BSSettings, NSSet;
@protocol BSSettingDescriptionProvider;

@interface BSSettingsDiff : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding, BSXPCCoding, BSXPCSecureCoding> {
    BSSettings *_changes;
    NSSet *_flagRemovals;
    NSSet *_objectRemovals;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isEmpty;
@property (weak, nonatomic) id<BSSettingDescriptionProvider> descriptionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)diffFromSettings:(id)a0 toSettings:(id)a1;
+ (Class)_removalClass;

- (BOOL)settingChangedForKey:(id)a0 type:(out unsigned long long *)a1;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (id)allSettings;
- (BOOL)_isKeyed;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)_keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)inspectKeyedChangesWithBlock:(id /* block */)a0;
- (unsigned long long)_diffTypesForSetting:(unsigned long long)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)applyToSettings:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)succinctDescription;
- (unsigned long long)_diffTypesForKey:(id)a0;
- (BOOL)settingChangedForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)inspectChangesWithBlock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
