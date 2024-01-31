@class SBDeviceApplicationSceneHandle;

@interface SBDeviceApplicationSceneEntity : SBApplicationSceneEntity

@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;

+ (id)defaultEntityWithApplicationForMainDisplay:(id)a0;
+ (id)defaultEntityWithApplicationForMainDisplay:(id)a0 targetContentIdentifier:(id)a1;
+ (id)defaultEntityWithApplication:(id)a0 sceneHandleProvider:(id)a1 displayIdentity:(id)a2;
+ (id)defaultEntityWithApplication:(id)a0 targetContentIdentifier:(id)a1 sceneHandleProvider:(id)a2 displayIdentity:(id)a3;
+ (id)entityWithApplicationForMainDisplay:(id)a0 withScenePersistenceIdentifier:(id)a1;
+ (id)newEntityWithApplicationForMainDisplay:(id)a0;
+ (id)entityWithApplication:(id)a0 scenePersistenceIdentifier:(id)a1 sceneHandleProvider:(id)a2 displayIdentity:(id)a3;
+ (id)newEntityWithApplication:(id)a0 sceneHandleProvider:(id)a1 displayIdentity:(id)a2;

- (BOOL)supportsSplitView;
- (id)deviceApplicationSceneEntity;
- (BOOL)wantsExclusiveForeground;
- (id)initWithApplication:(id)a0 sceneHandleProvider:(id)a1 displayIdentity:(id)a2;
- (id)initWithApplicationForMainDisplay:(id)a0 targetContentIdentifier:(id)a1;
- (id)initWithApplicationForMainDisplay:(id)a0 generatingNewSceneIfRequiredWithSpecification:(id)a1;
- (id)initWithApplicationSceneHandle:(id)a0;
- (id)initWithApplicationForMainSecureDisplay:(id)a0;
- (id)initWithApplication:(id)a0 uniqueIdentifier:(id)a1 targetContentIdentifier:(id)a2 sceneHandleProvider:(id)a3 displayIdentity:(id)a4;
- (id)initWithApplication:(id)a0 generatingNewPrimarySceneIfRequired:(BOOL)a1 sceneHandleProvider:(id)a2 displayIdentity:(id)a3;
- (id)initWithApplication:(id)a0 targetContentIdentifier:(id)a1 sceneHandleProvider:(id)a2 displayIdentity:(id)a3;
- (BOOL)isDeviceApplicationSceneEntity;
- (id)initWithApplicationForMainDisplay:(id)a0 uniqueIdentifier:(id)a1;
- (id)initWithApplicationForMainDisplay:(id)a0;
- (id)initWithApplicationForMainDisplay:(id)a0 generatingNewPrimarySceneIfRequired:(BOOL)a1;
- (id)initWithApplication:(id)a0 generatingNewSceneIfRequiredWithSpecification:(id)a1 sceneHandleProvider:(id)a2 displayIdentity:(id)a3;
- (Class)viewControllerClass;
- (BOOL)_supportsLayoutRole:(long long)a0;
- (id)initWithApplication:(id)a0 uniqueIdentifier:(id)a1 sceneHandleProvider:(id)a2 displayIdentity:(id)a3;
- (BOOL)supportsPresentationAtAnySize;

@end
