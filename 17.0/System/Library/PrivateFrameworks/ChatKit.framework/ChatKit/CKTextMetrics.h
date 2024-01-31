@interface CKTextMetrics : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic, getter=isSingleLine) BOOL singleLine;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } alignmentInset;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 singleLine:(BOOL)a1 alignmentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;

@end
