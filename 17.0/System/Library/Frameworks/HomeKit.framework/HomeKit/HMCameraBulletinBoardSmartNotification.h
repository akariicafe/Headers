@class HMCameraUserSettings, NSUUID;

@interface HMCameraBulletinBoardSmartNotification : HMBulletinBoardNotification {
    NSUUID *_targetUUID;
}

@property (weak) HMCameraUserSettings *cameraUserSettings;
@property (readonly) unsigned long long significantEventTypes;
@property (readonly) unsigned long long personFamiliarityOptions;

+ (id)personFamiliarityOptionsInPredicate:(id)a0;
+ (id)predicateForPersonFamiliarityOptions:(unsigned long long)a0;
+ (id)predicateForSignificantEventTypes:(unsigned long long)a0;
+ (id)predicateForSignificantEventTypes:(unsigned long long)a0 personFamiliarityOptions:(unsigned long long)a1;
+ (id)significantEventTypesInPredicate:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)targetUUID;
- (void)__configureWithContext:(id)a0 cameraUserSettings:(id)a1;
- (void)commitWithCompletionHandler:(id /* block */)a0;
- (id)initWithBulletinBoardNotification:(id)a0;

@end
