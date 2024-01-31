@class NSString, MTRContentLauncherClusterStyleInformationStruct;

@interface MTRContentLauncherClusterBrandingInformation : MTRContentLauncherClusterBrandingInformationStruct

@property (copy, nonatomic) NSString *providerName;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *background;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *logo;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *progressBar;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *splash;
@property (copy, nonatomic) MTRContentLauncherClusterStyleInformationStruct *waterMark;

@end
