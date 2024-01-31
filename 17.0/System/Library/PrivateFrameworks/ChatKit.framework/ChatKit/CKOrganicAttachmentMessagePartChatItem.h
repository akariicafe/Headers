@class CKOrganicImageLayoutRecipe;

@interface CKOrganicAttachmentMessagePartChatItem : CKAttachmentMessagePartChatItem

@property (retain, nonatomic) CKOrganicImageLayoutRecipe *layoutRecipe;

- (unsigned long long)layoutType;
- (Class)cellClass;
- (void).cxx_destruct;
- (unsigned long long)balloonCorners;
- (Class)balloonViewClass;
- (Class)customLayoutGroupProviderClass;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (BOOL)supportsInlineReplyTransition;

@end
