@class NSString, NSArray;

@interface PUErrorPresentationController : NSObject

@property (copy, nonatomic) NSString *alertTitle;
@property (copy, nonatomic) NSString *alertMessage;
@property (copy, nonatomic) NSArray *additionalAlertActions;
@property (copy, nonatomic) NSString *dismissButtonTitle;
@property (copy, nonatomic) NSString *radarTitle;
@property (copy, nonatomic) NSArray *additionalQuestionsInRadarDescription;
@property (copy, nonatomic) NSString *assetsListDescription;
@property (readonly, nonatomic) NSArray *errors;
@property (readonly, nonatomic) NSArray *assets;
@property (copy, nonatomic) NSString *radarDescription;
@property (readonly, copy, nonatomic) NSString *radarComponentID;
@property (readonly, copy, nonatomic) NSString *radarComponentName;
@property (readonly, copy, nonatomic) NSString *radarComponentVersion;

+ (id)alertActionForNavigatingToDestination:(long long)a0 withTitle:(id)a1 completion:(id /* block */)a2;
+ (BOOL)assetIsStandardVideo:(id)a0;
+ (BOOL)errorIsAuthenticationRelatedCPLError:(id)a0;
+ (BOOL)errorIsLowDiskSpaceRelatedCPLError:(id)a0;
+ (BOOL)isNetworkRelatedError:(id)a0;

- (void).cxx_destruct;
- (id)additionalRadarDescriptionLinesForAsset:(id)a0;
- (id)alertControllerWithCompletion:(id /* block */)a0;
- (id)assetsDescriptionFromAssets:(id)a0;
- (void)configureAlertPropertiesFromError:(id)a0 withAssets:(id)a1 willShowFileRadarButton:(BOOL)a2 alertCompletion:(id /* block */)a3;
- (void)configureRadarPropertiesFromError:(id)a0 withAssets:(id)a1;
- (id)initWithErrors:(id)a0 forAssets:(id)a1;
- (void)setRadarComponentID:(id)a0 name:(id)a1 version:(id)a2;
- (BOOL)shouldIncludeAssetInRadarDescription:(id)a0;
- (BOOL)shouldShowFileRadarAction;

@end
