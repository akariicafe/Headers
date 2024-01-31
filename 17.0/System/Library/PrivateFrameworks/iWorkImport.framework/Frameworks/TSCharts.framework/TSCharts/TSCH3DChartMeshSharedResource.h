@class TSCH3DDataBuffer;

@interface TSCH3DChartMeshSharedResource : TSCH3DChartMeshSharedChildResource

@property (retain, nonatomic) TSCH3DDataBuffer *mesh;

- (void).cxx_destruct;
- (id)get;
- (void)flushMemory;
- (void)setChildRegenerated:(BOOL)a0;

@end
