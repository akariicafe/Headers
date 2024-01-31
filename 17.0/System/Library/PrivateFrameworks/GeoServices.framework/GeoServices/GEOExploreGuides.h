@class GEOPDExploreGuides, GEOGuideLocation;

@interface GEOExploreGuides : NSObject {
    GEOPDExploreGuides *_pdExploreGuides;
}

@property (readonly, nonatomic) GEOGuideLocation *guideLocation;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)imageDownloadUrlFromTemplateUrl:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)imageURLForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithExploreGuides:(id)a0;

@end
