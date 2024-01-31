@class NSString;

@interface SCMLDetectionBox : NSObject

@property (readonly, nonatomic) float score;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;

- (void).cxx_destruct;
- (id)initWithScore:(float)a0 label:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
