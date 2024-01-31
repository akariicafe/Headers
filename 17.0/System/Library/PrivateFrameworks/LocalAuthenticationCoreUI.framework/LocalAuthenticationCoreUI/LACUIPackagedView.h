@class CALayer, LACUIPackagedViewStateController;

@interface LACUIPackagedView : UIView {
    CALayer *_rootLayer;
    LACUIPackagedViewStateController *_stateController;
}

- (void)setState:(id)a0 animated:(BOOL)a1;
- (void)setState:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
