@class NSString, SXTangierController;
@protocol SXActionManager;

@interface SXTextInteractionContextProvider : NSObject <SXInteractionContextProviding>

@property (readonly, nonatomic) SXTangierController *tangierController;
@property (readonly, nonatomic) id<SXActionManager> actionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commitPreviewViewController:(id)a0;
- (void).cxx_destruct;
- (id)contextMenuAtLocation:(struct CGPoint { double x0; double x1; })a0 viewport:(id)a1;
- (id)initWithTangierController:(id)a0 actionManager:(id)a1;
- (void)repAndHyperlinkAtLocation:(struct CGPoint { double x0; double x1; })a0 viewport:(id)a1 block:(id /* block */)a2;
- (id)targetedPreviewAtLocation:(struct CGPoint { double x0; double x1; })a0 viewport:(id)a1;
- (id)toolTipAtLocation:(struct CGPoint { double x0; double x1; })a0 viewport:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewportRectForLinkInRep:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 viewport:(id)a2;

@end
