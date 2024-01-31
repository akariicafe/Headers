@class NSArray;

@interface PLSearchOCRTextLine : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textBounds;
@property (readonly, nonatomic) BOOL isTitle;
@property (readonly, nonatomic) NSArray *candidates;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTitle:(BOOL)a1 candidates:(id)a2;

@end
