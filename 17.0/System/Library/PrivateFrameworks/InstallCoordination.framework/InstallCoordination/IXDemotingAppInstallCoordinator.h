@class NSString;

@interface IXDemotingAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithInstallOptions, IXCoordinatorWithImportance>

@property (readonly, nonatomic) BOOL hasInstallOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)intent;

- (id)validInstallTypes;

@end
