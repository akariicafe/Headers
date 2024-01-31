@class UIFont, NSString, UIColor, UIImage, GEOGuideLocation, NSAttributedString, NSArray;

@interface MKPlaceCompactCollectionViewModel : NSObject {
    NSArray *_supportedSizeCategories;
}

@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *subTitleFont;
@property (nonatomic) BOOL useBorderHighlight;
@property (nonatomic) struct CGSize { double width; double height; } photoSize;
@property (nonatomic) long long context;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *preferredSizeCategory;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSAttributedString *title;
@property (retain, nonatomic) NSAttributedString *subTitle;
@property (readonly, nonatomic) BOOL isWorldwide;
@property (readonly, nonatomic) GEOGuideLocation *guideLocation;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)initializeFonts;
- (void)compactCollectionImageForSize:(struct CGSize { double x0; double x1; })a0 onCompletion:(id /* block */)a1;
- (void)contentCategorySizeDidChange:(id)a0;
- (id)initWithGuideLocation:(id)a0 context:(long long)a1 useBorderHighlight:(BOOL)a2;
- (BOOL)shouldShowSubtitleForCategory:(id)a0;

@end
