@class UIImageView, CKAttachmentItem;

@interface CKReviewLargeAttachmentsTableViewCell : CKAbstractReviewTableViewCell

@property (retain, nonatomic) UIImageView *previewView;
@property (retain, nonatomic) CKAttachmentItem *attachmentItem;

+ (double)requestedHeight;
+ (struct CGSize { double x0; double x1; })leftHandSideViewSize;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)setModelObject:(id)a0;
- (void)_updateImageViewForAttachmentItem;
- (id)leftHandSideView;

@end
