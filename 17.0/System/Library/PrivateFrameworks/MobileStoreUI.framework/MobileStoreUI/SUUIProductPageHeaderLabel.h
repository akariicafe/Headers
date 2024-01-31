@class UIColor, NSString, NSArray, UIImage;

@interface SUUIProductPageHeaderLabel : UIView {
    UIImage *_contentRatingImage;
}

@property (nonatomic) BOOL isPad;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSString *contentRating;
@property (retain, nonatomic) NSArray *secondaryContentRatingImages;
@property (retain, nonatomic) UIColor *ratingColor;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_textAttributes;
- (id)_imageForContentRating:(id)a0;
- (struct __CTFramesetter { } *)_newTextFramesetter;
- (double)secondaryImageWidth;

@end
