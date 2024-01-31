@class NSString, NSDictionary;

@interface SecExperimentConfig : NSObject

@property (retain) NSString *identifier;
@property (retain) NSDictionary *config;
@property unsigned int fleetSampleRate;
@property unsigned int deviceSampleRate;
@property (retain) NSDictionary *configurationData;
@property (readonly) BOOL isSampled;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (unsigned int)hostHash;
- (BOOL)shouldRunWithSamplingRate:(id)a0;

@end
