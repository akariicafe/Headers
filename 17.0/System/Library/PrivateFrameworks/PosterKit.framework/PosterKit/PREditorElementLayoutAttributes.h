@interface PREditorElementLayoutAttributes : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (readonly, nonatomic) unsigned long long variant;
@property (readonly, nonatomic) unsigned long long resolvedTitleLayout;

- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 variant:(unsigned long long)a1 resolvedTitleLayout:(unsigned long long)a2;

@end
