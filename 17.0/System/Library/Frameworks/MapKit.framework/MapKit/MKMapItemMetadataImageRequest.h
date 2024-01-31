@class GEOPhotoInfo;

@interface MKMapItemMetadataImageRequest : MKMapItemMetadataRequest

@property (copy, nonatomic) id /* block */ imageHandler;
@property (retain, nonatomic) GEOPhotoInfo *info;

+ (id)requestWithMapItem:(id)a0 info:(id)a1;

- (void)handleError:(id)a0;
- (void).cxx_destruct;
- (id)url;
- (void)handleData:(id)a0;

@end
