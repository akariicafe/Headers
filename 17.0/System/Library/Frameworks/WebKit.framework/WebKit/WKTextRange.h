@class NSArray;

@interface WKTextRange : UITextRange

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endRect;
@property (nonatomic) BOOL isNone;
@property (nonatomic) BOOL isRange;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) unsigned long long selectedTextLength;
@property (copy, nonatomic) NSArray *selectionRects;

+ (id)textRangeWithState:(BOOL)a0 isRange:(BOOL)a1 isEditable:(BOOL)a2 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 endRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 selectionRects:(id)a5 selectedTextLength:(unsigned long long)a6;

- (void)dealloc;
- (id)start;
- (id)end;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEmpty;
- (BOOL)_isCaret;
- (BOOL)_isRanged;

@end
