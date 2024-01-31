@class NSString, NSSet, UISScenePlacementConfiguration;

@interface UISSceneRequestOptions : FBSWorkspaceSceneRequestOptions <BSXPCSecureCoding>

@property (copy, nonatomic) NSString *sourceIdentifier;
@property (copy, nonatomic) NSString *interactionIdentifier;
@property (copy, nonatomic) NSSet *actions;
@property (nonatomic) long long sceneRequestIntent;
@property (nonatomic) BOOL requestQuickLookScene;
@property (retain, nonatomic) UISScenePlacementConfiguration *scenePlacementConfiguration;
@property (nonatomic) BOOL requestFullscreen;
@property (nonatomic) BOOL requestBackground;
@property (nonatomic) BOOL preserveLayout;
@property (nonatomic) BOOL requestCenterSlot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

@end
