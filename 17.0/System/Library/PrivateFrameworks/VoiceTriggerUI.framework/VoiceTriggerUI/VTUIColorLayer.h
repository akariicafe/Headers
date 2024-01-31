@class UIColor;

@interface VTUIColorLayer : CAShapeLayer {
    UIColor *_redColor;
    UIColor *_blueColor;
    UIColor *_backgroundColor;
}

@property float phase;

+ (BOOL)needsDisplayForKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)actionForKey:(id)a0;
- (void)display;

@end
