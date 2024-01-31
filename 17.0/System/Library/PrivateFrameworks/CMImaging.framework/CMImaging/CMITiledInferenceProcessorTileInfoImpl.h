@class NSArray, NSString;
@protocol MTLCommandQueue, CMITiledInferenceProcessorNetwork, MTLCommandBuffer;

@interface CMITiledInferenceProcessorTileInfoImpl : NSObject <CMITiledInferenceProcessorTileInfo>

@property (nonatomic) void /* unknown type, empty encoding */ tileCount;
@property (nonatomic) unsigned long long bufferCount;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (nonatomic) unsigned long long bufferIndex;
@property (retain, nonatomic) NSArray *networks;
@property (nonatomic) void /* unknown type, empty encoding */ tileIndex;
@property (retain, nonatomic) id<CMITiledInferenceProcessorNetwork> nextNetwork;
@property (retain, nonatomic) id<CMITiledInferenceProcessorNetwork> previousNetwork;
@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (retain, nonatomic) id userContext;
@property (retain, nonatomic) id<MTLCommandBuffer> lastCommandBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)resetTileSpecificInfo;

@end
