@class NSString, NSDictionary;

@interface BWNoiseReductionAndSharpeningParameters : NSObject {
    NSString *_portType;
    NSDictionary *_noiseReductionAndSharpeningConfiguration;
}

- (id)portType;
- (void)dealloc;
- (id)description;
- (id)initWithPortType:(id)a0 sensorIDDictionary:(id)a1;
- (id)noiseReductionAndSharpeningConfigurationForType:(int)a0 gain:(float)a1;

@end
