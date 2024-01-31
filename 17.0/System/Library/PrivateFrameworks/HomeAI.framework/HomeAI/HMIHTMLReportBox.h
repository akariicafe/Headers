@class NSString;

@interface HMIHTMLReportBox : HMFObject

@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly) NSString *text;
@property (readonly) NSString *color;
@property (readonly) float opacity;
@property (readonly) float value;

- (void).cxx_destruct;
- (id)initWithBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 text:(id)a1 color:(id)a2 opacity:(float)a3 value:(float)a4;

@end
