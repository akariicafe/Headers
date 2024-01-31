@class NSString;
@protocol NURenderStatistics, NUAuxiliaryImage;

@interface _NUAuxiliaryImageRenderResult : _NURenderResult <NUAuxiliaryImageRenderResult>

@property (retain) id<NUAuxiliaryImage> auxiliaryImage;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
