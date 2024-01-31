@class SUScriptCanvasFunction;

@interface SUCanvasMaskProvider : SUMaskProvider {
    SUScriptCanvasFunction *_function;
}

- (void)dealloc;
- (id)initWithFunction:(id)a0;
- (id)copyMaskImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGPath { } *)copyPathForMaskWithSize:(struct CGSize { double x0; double x1; })a0;

@end
