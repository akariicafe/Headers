@class CMIInferenceNetworkEspressoV1, NSArray, NSString;

@interface CMIInferenceNetworkInstanceEspressoV1 : NSObject <CMIInferenceNetworkInstance> {
    NSArray *_bindings;
}

@property (weak, nonatomic) CMIInferenceNetworkEspressoV1 *parentNetwork;
@property (nonatomic) unsigned long long instanceId;
@property (retain, nonatomic) NSArray *inputTextures;
@property (retain, nonatomic) NSArray *outputTextures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)_allocateTexturesWithDevice:(id)a0 firstInstance:(id)a1 ports:(id)a2 useTextureArrays:(BOOL)a3 outputTextureArray:(id)a4;
- (int)_bindPixelBuffersToNetwork;
- (int)synchronizeMetalWaitOnNetworkSignal:(id)a0;
- (int)synchronizeNetworkWaitOnMetalSignal:(id)a0;

@end
