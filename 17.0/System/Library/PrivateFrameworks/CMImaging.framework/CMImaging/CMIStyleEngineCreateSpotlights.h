@class NSString;
@protocol MTLTexture, MTLComputePipelineState;

@interface CMIStyleEngineCreateSpotlights : NSObject <CMIStyleEngineProcessingStage> {
    id<MTLComputePipelineState> _createSpotlightsComputePipelineState;
    struct { void /* unknown type, empty encoding */ spotlightCount; void /* unknown type, empty encoding */ imageSize; } _params;
}

@property (nonatomic) void /* unknown type, empty encoding */ inputImageSize;
@property (retain, nonatomic) id<MTLTexture> outputSpotlightTextureTopLeft;
@property (retain, nonatomic) id<MTLTexture> outputSpotlightTextureTopEdge;
@property (retain, nonatomic) id<MTLTexture> outputSpotlightTextureTopRight;
@property (retain, nonatomic) id<MTLTexture> outputSpotlightTextureLeftEdge;
@property (retain, nonatomic) id<MTLTexture> outputSpotlightTextureCentral;
@property (retain, nonatomic) id<MTLTexture> outputSpotlightTextureRightEdge;
@property (retain, nonatomic) id<MTLTexture> outputSpotlightTextureBottomLeft;
@property (retain, nonatomic) id<MTLTexture> outputSpotlightTextureBottomEdge;
@property (retain, nonatomic) id<MTLTexture> outputSpotlightTextureBottomRight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
