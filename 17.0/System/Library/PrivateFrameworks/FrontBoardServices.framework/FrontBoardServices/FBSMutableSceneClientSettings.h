@class NSOrderedSet, NSString, FBSSceneIdentityToken;

@interface FBSMutableSceneClientSettings : FBSSceneClientSettings <FBSMutableSettings>

@property (copy, nonatomic) NSOrderedSet *layers;
@property (nonatomic) double preferredLevel;
@property (nonatomic) long long preferredInterfaceOrientation;
@property (copy, nonatomic) NSString *preferredSceneHostIdentifier;
@property (copy, nonatomic) FBSSceneIdentityToken *preferredSceneHostIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
