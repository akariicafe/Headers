@class SLCollaborationFooterViewModel;
@protocol SLCollaborationFooterViewDelegate;

@interface SLCollaborationFooterView : SLRemoteView

@property (readonly, nonatomic) SLCollaborationFooterViewModel *model;
@property (weak, nonatomic) id<SLCollaborationFooterViewDelegate> delegate;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)expectedHeightForWidth:(double)a0;
- (id)initWithModel:(id)a0 maxWidth:(double)a1;
- (id)makePlaceholderSlotContentForStyle:(id)a0;
- (void)renderRemoteContentForLayerContextID:(unsigned long long)a0 style:(id)a1 yield:(id /* block */)a2;
- (void)updateRemoteRenderingEnabled;
- (void)updateWithNewModel:(id)a0;

@end
