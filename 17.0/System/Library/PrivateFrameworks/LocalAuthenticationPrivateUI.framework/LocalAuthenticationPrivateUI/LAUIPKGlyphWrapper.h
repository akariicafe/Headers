@class NSObject, UIView;
@protocol GlyphMethods, OS_dispatch_queue;

@interface LAUIPKGlyphWrapper : NSObject

@property (readonly, nonatomic) UIView<GlyphMethods> *glyphView;
@property (readonly, nonatomic) UIView<GlyphMethods> *idleTouchID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *glyphQueue;
@property (readonly, nonatomic) UIView *view;
@property (nonatomic) BOOL fastAnimations;
@property (nonatomic) BOOL grayedOut;
@property (nonatomic) BOOL hidden;

+ (Class)_loadClassFromString:(id)a0;
+ (void *)_loadPKUI;
+ (id)glyphWithStyle:(long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void).cxx_destruct;
- (double)_minimumAnimationDurationForState:(long long)a0;
- (id)initWithGlyphView:(id)a0;
- (void)setState:(long long)a0 idleTouchID:(BOOL)a1 animated:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
