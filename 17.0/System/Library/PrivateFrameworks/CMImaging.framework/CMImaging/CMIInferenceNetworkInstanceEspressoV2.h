@class CMIInferenceNetworkEspressoV2, NSArray, NSString;
@protocol MTLSharedEventSPI;

@interface CMIInferenceNetworkInstanceEspressoV2 : NSObject <CMIInferenceNetworkInstance>

@property (weak, nonatomic) CMIInferenceNetworkEspressoV2 *parentNetwork;
@property (retain, nonatomic) NSArray *inputTextures;
@property (retain, nonatomic) NSArray *outputTextures;
@property (nonatomic) struct e5rt_execution_stream_operation { } *esop;
@property (retain, nonatomic) id<MTLSharedEventSPI> sharedEvent;
@property (nonatomic) struct e5rt_async_event { } *preEvent;
@property (nonatomic) struct e5rt_async_event { } *postEvent;
@property (nonatomic) unsigned long long eventValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (int)_allocateTexturesWithDevice:(id)a0 ports:(id)a1 useTextureArrays:(BOOL)a2 outputTextureArray:(id)a3;
- (int)_createEventsWithDevice:(id)a0;
- (int)synchronizeMetalWaitOnNetworkSignal:(id)a0;
- (int)synchronizeNetworkWaitOnMetalSignal:(id)a0;

@end
