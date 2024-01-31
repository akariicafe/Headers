@interface CKReplyContextAggregateAttachmentMessagePartChatItem : CKAggregateAttachmentMessagePartChatItem <CKReplyContext>

- (Class)cellClass;
- (BOOL)canForward;
- (Class)balloonViewClass;
- (BOOL)isReplyContextPreview;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)loadTranscriptDrawerText;
- (BOOL)replyIsFromMe;

@end
