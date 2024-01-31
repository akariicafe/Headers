@class NSString, UIFont;

@interface UIAutocorrectTextView : UIView {
    NSString *m_string;
    int m_type;
    int m_edgeType;
    UIFont *m_textFont;
}

@property (nonatomic) BOOL animating;
@property (nonatomic) BOOL isLongString;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 forEvent:(struct __GSEvent { } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateRectForExpandedHitRegion;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 string:(id)a1 type:(int)a2 edgeType:(int)a3;
- (void)setEdgeType:(int)a0;

@end
