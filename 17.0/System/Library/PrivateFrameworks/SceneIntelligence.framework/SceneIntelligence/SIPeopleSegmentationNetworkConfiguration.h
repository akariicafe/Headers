@class NSString;

@interface SIPeopleSegmentationNetworkConfiguration : SINetworkConfiguration

@property (nonatomic) long long networkModeEnum;
@property (nonatomic) long long modelConfig;
@property (readonly, nonatomic) NSString *imageScalerIdentifier;
@property (readonly, nonatomic) unsigned int inputImageFormat;

- (id)init;
- (void).cxx_destruct;

@end
