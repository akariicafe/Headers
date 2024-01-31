@class NSString;

@interface CAScrollLayer : CALayer

@property (copy) NSString *scrollMode;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;

- (void)_scrollPoint:(struct CGPoint { double x0; double x1; })a0 fromLayer:(id)a1;
- (void)_scrollRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromLayer:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleRectOfLayer:(id)a0;
- (void)scrollToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
