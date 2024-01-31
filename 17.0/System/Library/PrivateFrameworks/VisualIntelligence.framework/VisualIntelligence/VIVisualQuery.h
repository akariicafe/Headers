@class VIAnnotation, NSSet, VIQueryContext;
@protocol VIImageContent;

@interface VIVisualQuery : NSObject <NSCopying>

@property (readonly, nonatomic) id<VIImageContent> image;
@property (readonly, nonatomic) VIAnnotation *annotation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedRegionOfInterest;
@property (readonly, nonatomic) NSSet *domainsOfInterest;
@property (readonly, nonatomic) VIQueryContext *queryContext;

+ (id)queryWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 normalizedRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 annotation:(id)a3 queryContext:(id)a4;
+ (id)queryWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1;
+ (id)queryWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 normalizedRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)queryWithPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 normalizedRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 textBlockAnnotation:(id)a3 queryContext:(id)a4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithImage:(id)a0 annotation:(id)a1 normalizedRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 domainsOfInterest:(id)a3 queryContext:(id)a4;
- (id)initWithImage:(id)a0 textBlockAnnotation:(id)a1 normalizedRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 domainsOfInterest:(id)a3 queryContext:(id)a4;

@end
