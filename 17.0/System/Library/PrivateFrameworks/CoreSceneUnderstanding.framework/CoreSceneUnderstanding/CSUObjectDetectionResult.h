@class NSString;

@interface CSUObjectDetectionResult : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } box;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)initWithCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 score:(float)a1 label:(id)a2;

@end
