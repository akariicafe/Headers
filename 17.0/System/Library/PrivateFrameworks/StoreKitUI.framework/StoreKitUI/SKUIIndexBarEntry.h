@class UIColor, NSAttributedString, UIImage;

@interface SKUIIndexBarEntry : NSObject {
    struct CGSize { double width; double height; } _contentSize;
    BOOL _hasValidContentSize;
    UIColor *_tintColor;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (copy, nonatomic) UIColor *tintColor;
@property (nonatomic) long long entryType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (readonly, nonatomic) NSAttributedString *entryAttributedString;
@property (readonly, nonatomic) UIImage *entryImage;
@property (nonatomic) long long visibilityPriority;

+ (id)entryWithImage:(id)a0;
+ (id)entryWithAttributedString:(id)a0;
+ (id)placeholderEntryWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)systemCombinedEntry;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_tintColorDidChange;
- (struct CGSize { double x0; double x1; })_calculatedContentSize;
- (void)_drawContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
