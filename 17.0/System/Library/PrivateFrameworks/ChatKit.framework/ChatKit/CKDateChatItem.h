@class NSDate;

@interface CKDateChatItem : CKStampLabelChatItem

@property (readonly, nonatomic) NSDate *date;

- (id)now;
- (unsigned long long)layoutType;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)loadTranscriptText;

@end
