@class SINetworkConfiguration, NSDictionary, SICoreAnalyticManager;
@protocol SINetworkProtocol;

@interface SIModel : NSObject

@property (retain, nonatomic) id<SINetworkProtocol> network;
@property (retain, nonatomic) SINetworkConfiguration *config;
@property (nonatomic) unsigned long long inferenceSignpostEventStart;
@property (nonatomic) unsigned long long inferenceSignpostEventEnd;
@property (retain) NSDictionary *inputs;
@property (retain) NSDictionary *outputs;
@property (retain, nonatomic) SICoreAnalyticManager *coreAnalyticManager;
@property double frameTimestamp;

- (void).cxx_destruct;
- (id)getConfiguration;
- (struct CGSize { double x0; double x1; })getOutputResolution;
- (id)initWithNetworkConfiguration:(id)a0;
- (id)networkVersion;
- (void)addPrewiringBuffersToStreamWithInputPools:(id)a0 outputPools:(id)a1 clearWiredBuffer:(BOOL)a2;
- (long long)evaluateWithInput:(id)a0 outputs:(id)a1;
- (struct CGSize { double x0; double x1; })getInputResolution;
- (id)getOpsForLibrary;
- (id)keysForCoreAnalyticAccumulatedData;
- (BOOL)switchNetworkConfiguration:(long long)a0;
- (void)unwirePrewiringBuffers;

@end
