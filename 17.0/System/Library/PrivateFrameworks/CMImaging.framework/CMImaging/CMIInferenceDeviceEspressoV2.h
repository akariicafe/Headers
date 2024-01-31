@class NSString;

@interface CMIInferenceDeviceEspressoV2 : NSObject <CMIInferenceDevice>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)createExecutionStream;
- (id)loadNetworkWithPath:(id)a0;

@end
