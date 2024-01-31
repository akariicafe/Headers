@interface NUGeometryJob : NURenderJob

- (id)result;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsRenderStage;
- (id)geometryRequest;

@end
