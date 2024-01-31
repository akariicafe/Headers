@interface PREditingRequestRemoteViewControllerPresentationAction : BSAction

@property (readonly, nonatomic) unsigned long long sourceLayerRenderId;
@property (readonly, nonatomic) unsigned int sourceContextId;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } presentedViewScreenRect;

- (id)initWithSourceLayerRenderId:(unsigned long long)a0 sourceContextId:(unsigned int)a1 presentedViewScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
