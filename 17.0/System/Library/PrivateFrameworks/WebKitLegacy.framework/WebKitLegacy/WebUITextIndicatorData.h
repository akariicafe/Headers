@class UIImage, NSArray, UIColor;

@interface WebUITextIndicatorData : NSObject

@property (retain, nonatomic) UIImage *dataInteractionImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selectionRectInRootViewCoordinates;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textBoundingRectInRootViewCoordinates;
@property (retain, nonatomic) NSArray *textRectsInBoundingRectCoordinates;
@property (nonatomic) double contentImageScaleFactor;
@property (retain, nonatomic) UIImage *contentImageWithHighlight;
@property (retain, nonatomic) UIImage *contentImage;
@property (retain, nonatomic) UIImage *contentImageWithoutSelection;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentImageWithoutSelectionRectInRootViewCoordinates;
@property (retain, nonatomic) UIColor *estimatedBackgroundColor;

- (void)dealloc;
- (id)initWithImage:(struct CGImage { } *)a0 scale:(double)a1;
- (id)initWithImage:(struct CGImage { } *)a0 textIndicatorData:(const void *)a1 scale:(double)a2;

@end
