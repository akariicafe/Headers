@class CNCache, NSString;

@interface CNUIPRLikenessPlaceholderProvider : NSObject <CNUIPRLikenessProvider>

@property (readonly, nonatomic) CNCache *cache;
@property (nonatomic) BOOL isForCompany;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)companyImageNameForDiameter:(double)a0;
+ (id)imageNameForDiameter:(double)a0;

- (id)initWithContact:(id)a0;
- (id)init;
- (unsigned long long)_cnui_likenessType;
- (void).cxx_destruct;
- (struct CGImage { } *)_cnui_circularImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)_cnui_likenessForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGImage { } *)_cnui_roundedRectImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGImage { } *)renderCircularImageForSilhouetteImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (struct CGImage { } *)renderRoundedRectImageForSilhouetteImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;

@end
