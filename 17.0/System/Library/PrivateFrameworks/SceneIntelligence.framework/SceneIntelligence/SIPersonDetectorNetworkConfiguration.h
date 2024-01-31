@class NSString;

@interface SIPersonDetectorNetworkConfiguration : SINetworkConfiguration

@property (nonatomic) long long networkModeEnum;
@property (nonatomic) long long modelConfig;
@property (readonly, nonatomic) NSString *imageScalerIdentifier;

- (id)init;
- (void).cxx_destruct;

@end
