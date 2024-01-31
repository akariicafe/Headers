@class NSString, NSDictionary, CIDualRedEyeRepairSession, NSMutableArray;

@interface BWRedEyeReductionController : BWStillImageProcessorController <BWRedEyeReductionControllerInputDelegate> {
    NSDictionary *_redEyeReductionParametersByPortType;
    CIDualRedEyeRepairSession *_redEyeRepairSession;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    NSMutableArray *_requestQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)prewarm;
+ (void)initialize;

- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (unsigned long long)type;
- (void)cancelProcessing;
- (void)didReceiveAllFramesForInput:(id)a0;
- (void)didReceiveFrameForInput:(id)a0;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1;

@end
