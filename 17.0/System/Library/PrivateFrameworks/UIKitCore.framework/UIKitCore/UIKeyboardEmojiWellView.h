@class UIFont, NSArray, NSString, UIColor, UILabel, UIView, NSIndexPath;

@interface UIKeyboardEmojiWellView : UIView <UIKeyboardEmojiDraggableViewDelegate>

@property (retain, nonatomic) UILabel *unreleasedBanner;
@property (retain, nonatomic) UIView *wellContentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) struct CGSize { double width; double height; } compositeImageSize;
@property (retain, nonatomic) NSArray *compositeImageRepresentation;
@property (retain, nonatomic) UIFont *labelFont;
@property (retain, nonatomic) NSString *stringRepresentation;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isActiveSelection) BOOL activeSelection;
@property (retain, nonatomic) UIColor *selectionBackgroundColor;
@property (retain, nonatomic) NSIndexPath *associatedIndexPath;
@property (nonatomic) BOOL unreleasedHighlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dragWillBegin:(id)a0;
- (id)fontUsingSilhouette:(unsigned long long)a0 size:(double)a1;
- (void)setStringRepresentation:(id)a0 silhouette:(unsigned long long)a1;

@end
