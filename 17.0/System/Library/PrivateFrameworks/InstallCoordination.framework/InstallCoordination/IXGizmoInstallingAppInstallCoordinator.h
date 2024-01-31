@class NSString;

@interface IXGizmoInstallingAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithImportance>

@property (readonly, nonatomic) BOOL hasAppAssetPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasInstallOptions;

+ (BOOL)modifiesLocalLaunchServicesDatabase;
+ (unsigned long long)intent;

- (BOOL)setTargetGizmoPairingID:(id)a0 error:(id *)a1;
- (id)targetGizmoPairingIDWithError:(id *)a0;
- (id)validInstallTypes;

@end
