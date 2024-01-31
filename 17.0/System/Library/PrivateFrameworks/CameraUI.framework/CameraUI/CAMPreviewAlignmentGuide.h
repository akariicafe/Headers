@class CAMPreviewAlignmentModel, NSString, CAMLevelCrosshair;

@interface CAMPreviewAlignmentGuide : UIView <CAMPreviewAlignmentModelObserver>

@property (readonly, nonatomic) CAMLevelCrosshair *_targetCrosshair;
@property (readonly, nonatomic) CAMLevelCrosshair *_guidanceCrosshair;
@property (readonly, nonatomic) CAMPreviewAlignmentModel *alignmentModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)previewAlignmentModelDidChangeAlignmentTransform:(id)a0;
- (void)previewAlignmentModelDidChangeOpacity:(id)a0;

@end
