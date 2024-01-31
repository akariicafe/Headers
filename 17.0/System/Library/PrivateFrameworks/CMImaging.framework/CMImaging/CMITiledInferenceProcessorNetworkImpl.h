@class NSArray, NSString;

@interface CMITiledInferenceProcessorNetworkImpl : NSObject <CMITiledInferenceProcessorNetwork>

@property (retain, nonatomic) NSArray *inputs;
@property (retain, nonatomic) NSArray *outputs;
@property (nonatomic) long long networkIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
