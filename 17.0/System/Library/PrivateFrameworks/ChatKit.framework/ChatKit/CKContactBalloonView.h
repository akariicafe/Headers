@class NSString, UIImageView, CKMediaObject, UILabel;

@interface CKContactBalloonView : CKColoredBalloonView <CKContactBalloonViewProtocol>

@property (retain, nonatomic) UIImageView *chevron;
@property (retain, nonatomic) UIImageView *contactImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *organizationLabel;
@property (retain, nonatomic) CKMediaObject *mediaObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowChevron;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)_truncateNameIfNeeded:(id)a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)addOverlaySubview:(id)a0;
- (void)configureForComposition:(id)a0;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2;
- (void)configureForMessagePart:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;

@end
