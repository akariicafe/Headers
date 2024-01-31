@class NSNumber, NSArray;
@protocol ARTechniqueForwardingStrategy, ARTechniqueDelegate;

@interface ARRemoteGeoTrackingTechnique : ARRemoteTechnique <ARGeoTrackingTechniqueProtocol>

@property double visualLocalizationCallInterval;
@property double posteriorVisualLocalizationCallInterval;
@property double visualLocalizationCallIntervalTimeThreshold;
@property BOOL visualLocalizationUpdatesRequested;
@property unsigned long long supportEnablementOptions;
@property (weak) id<ARTechniqueDelegate> delegate;
@property unsigned long long powerUsage;
@property double bonusLatency;
@property (readonly) NSNumber *traceKey;
@property (retain) NSArray *splitTechniques;
@property (retain) id<ARTechniqueForwardingStrategy> splitTechniqueFowardingStrategy;

+ (id)new;

- (id)init;
- (void /* unknown type, empty encoding */)getLocationFromWorldPosition:(SEL)a0 error:(id *)a1;
- (id)initWithServerConnection:(id)a0;
- (BOOL)reconfigurableFrom:(id)a0;
- (void)reconfigureFrom:(id)a0;
- (unsigned long long)requiredSensorDataTypes;

@end
