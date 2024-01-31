@class CKWaveformProgressView;

@interface CKAudioReplyPreviewBalloonView : CKColoredBalloonView

@property (retain, nonatomic) CKWaveformProgressView *waveformProgressView;
@property (nonatomic) double duration;
@property (nonatomic) long long waveformContentMode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureForComposition:(id)a0;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2;
- (void)configureForMessagePart:(id)a0;
- (void)setWaveform:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;

@end
