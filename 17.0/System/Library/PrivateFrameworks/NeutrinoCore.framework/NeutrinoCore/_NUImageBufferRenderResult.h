@class NUImageGeometry, NUStorageImageBuffer, NSString, NURegion;
@protocol NURenderStatistics;

@interface _NUImageBufferRenderResult : _NUImageRenderResult <NUImageBufferRenderResult>

@property (retain) NUStorageImageBuffer *buffer;
@property (readonly) NURegion *region;
@property (readonly) NUImageGeometry *geometry;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
