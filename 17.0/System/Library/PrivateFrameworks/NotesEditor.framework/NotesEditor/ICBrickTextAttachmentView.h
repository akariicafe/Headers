@class ICAttachmentBrickView;

@interface ICBrickTextAttachmentView : ICAttachmentView

@property (retain, nonatomic) ICAttachmentBrickView *attachmentBrickView;

- (id)accessibilityLabel;
- (void)dealloc;
- (void)setHighlightColor:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityUserInputLabels;
- (id)accessibilityValue;
- (void)updateCornerRadius;
- (struct CGSize { double x0; double x1; })attachmentSizeForTextContainer:(id)a0;
- (void)setHighlightPatternRegexFinder:(id)a0;
- (void)didChangeAttachment;
- (void)didChangeAttachmentTitle;
- (id)imageForPrinting;
- (id)quickLookTransitionView;
- (void)requestAttachmentContentUpdate;
- (void)sharedInit:(BOOL)a0;

@end
