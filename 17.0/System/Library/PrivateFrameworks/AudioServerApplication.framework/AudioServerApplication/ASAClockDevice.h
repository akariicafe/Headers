@class NSString, NSArray;

@interface ASAClockDevice : ASAObject

@property (copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *deviceUID;
@property (readonly, nonatomic) unsigned int transportType;
@property (readonly, nonatomic) unsigned int clockDomain;
@property (readonly, nonatomic, getter=isAlive) BOOL alive;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (nonatomic) double nominalSampleRate;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) unsigned int inputLatency;
@property (readonly, nonatomic) unsigned int outputLatency;
@property (readonly, nonatomic) unsigned int zeroTimestampPeriod;
@property (readonly, copy, nonatomic) NSArray *nominalSampleRates;
@property (readonly, copy, nonatomic) NSArray *controlObjectIDs;
@property (readonly, copy, nonatomic) NSArray *controls;

- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (unsigned int)clockDomain;
- (id)manufacturer;
- (unsigned int)inputLatency;
- (id)deviceUID;
- (unsigned int)outputLatency;
- (id)controls;
- (void)setName:(id)a0;
- (id)name;
- (unsigned int)transportType;
- (id)controlObjectIDs;
- (id)coreAudioClassName;
- (double)nominalSampleRate;
- (id)nominalSampleRates;
- (void)setNominalSampleRate:(double)a0;
- (unsigned int)zeroTimestampPeriod;

@end
