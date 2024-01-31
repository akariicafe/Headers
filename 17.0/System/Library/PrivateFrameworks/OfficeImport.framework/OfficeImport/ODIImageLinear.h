@class NSString;

@interface ODIImageLinear : ODILinear {
    NSString *mImagePresentationName;
}

- (void).cxx_destruct;
- (id)initWithImagePresentationName:(id)a0 state:(id)a1;
- (void)mapPoint:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
