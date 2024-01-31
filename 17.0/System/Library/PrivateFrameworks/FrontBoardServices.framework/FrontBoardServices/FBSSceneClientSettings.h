@class NSOrderedSet, NSString, FBSSceneIdentityToken;

@interface FBSSceneClientSettings : FBSSettings <FBSSceneClientSettings, NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSOrderedSet *layers;
@property (readonly, nonatomic) double preferredLevel;
@property (readonly, nonatomic) long long preferredInterfaceOrientation;
@property (readonly, copy, nonatomic) NSString *preferredSceneHostIdentifier;
@property (readonly, copy, nonatomic) FBSSceneIdentityToken *preferredSceneHostIdentity;

+ (id)_settingsExtensionsForSceneExtension:(Class)a0;
+ (id)settings;
+ (Class)_mutableClass;
+ (Class)subclassExtension;
+ (Class)_baseClass;
+ (Class)_diffClass;

- (id)initWithSettings:(id)a0;

@end
