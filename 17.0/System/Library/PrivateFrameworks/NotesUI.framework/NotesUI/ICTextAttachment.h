@interface ICTextAttachment : ICBaseTextAttachment

+ (double)defaultAttachmentThumbnailViewHeight;
+ (Class)textAttachmentClassForAttachment:(id)a0;
+ (BOOL)textAttachmentIsContent:(id)a0;
+ (id)textAttachmentWithAttachment:(id)a0;

- (BOOL)isUnsupported;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForAttributes:(id)a0 location:(id)a1 textContainer:(id)a2 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 position:(struct CGPoint { double x0; double x1; })a4;
- (id)initWithData:(id)a0 ofType:(id)a1;
- (struct CGSize { double x0; double x1; })attachmentSizeForTextContainer:(id)a0;
- (double)availableWidthForTextContainer:(id)a0;
- (id)attachmentAsNSTextAttachment;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsIncludingMarginsFromAttachmentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct { double x0; double x1; double x2; double x3; })attachmentBoundsMargins;
- (id)attachmentFileWrapper;
- (struct CGSize { double x0; double x1; })attachmentSizeForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)requiresSpaceAfterAttachmentForPrinting;

@end
