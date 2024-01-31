@class NSURL, NUImageGeometry, NSString;
@protocol NURenderStatistics;

@interface _NUExportResult : _NURenderResult <NUExportResult>

@property (retain) NSURL *destinationURL;
@property (retain) NUImageGeometry *geometry;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
