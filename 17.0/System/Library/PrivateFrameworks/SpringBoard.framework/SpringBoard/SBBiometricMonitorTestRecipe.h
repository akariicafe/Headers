@class NSString, SBBiometricMonitorTestRecipeDummyDataSource, SBWindowScene, SBBiometricMonitorUI;

@interface SBBiometricMonitorTestRecipe : NSObject <SBTestRecipe> {
    SBBiometricMonitorUI *_monitorUI;
    SBBiometricMonitorTestRecipeDummyDataSource *_dataSource;
}

@property (weak, nonatomic) SBWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void).cxx_destruct;
- (id)title;
- (void)windowSceneDidUpdate:(id)a0;

@end
