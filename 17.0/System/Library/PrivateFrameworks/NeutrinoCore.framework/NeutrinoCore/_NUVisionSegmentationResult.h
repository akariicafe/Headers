@class NSString;
@protocol NURenderStatistics, NUImageBuffer;

@interface _NUVisionSegmentationResult : _NURenderResult <NUVisionSegmentationResult> {
    id<NUImageBuffer> _buffer;
    id<NUImageBuffer> _confidenceBuffer;
}

@property (nonatomic) long long segmentationType;
@property (readonly, nonatomic) id<NUImageBuffer> matteImageBuffer;
@property (readonly, nonatomic) id<NUImageBuffer> confidenceMapBuffer;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSegmentedMatteBuffer:(id)a0 confidenceMapBuffer:(id)a1;

@end
