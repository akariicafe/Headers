@class NSArray;

@interface HMDCameraConfigurationsLogEvent : HMMLogEvent

@property (readonly, nonatomic) NSArray *homeSettingsConfigurations;

- (void).cxx_destruct;
- (id)initWithHomes:(id)a0;

@end
