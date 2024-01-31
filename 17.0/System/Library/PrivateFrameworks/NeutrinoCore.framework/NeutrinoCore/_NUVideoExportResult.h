@class NSString, NSURL, NUImageGeometry;
@protocol NURenderStatistics;

@interface _NUVideoExportResult : _NUExportResult <NUVideoExportResult>

@property (copy, nonatomic) NSString *digest;
@property (readonly) NSURL *destinationURL;
@property (readonly) NUImageGeometry *geometry;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
