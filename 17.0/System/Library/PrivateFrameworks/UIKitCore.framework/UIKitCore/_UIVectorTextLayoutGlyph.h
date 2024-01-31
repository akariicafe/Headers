@class UIBezierPath, NSString;

@interface _UIVectorTextLayoutGlyph : NSObject <_UIVectorTextLayoutGlyph>

@property (nonatomic) unsigned short glyph;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (retain, nonatomic) UIBezierPath *path;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } pathTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
