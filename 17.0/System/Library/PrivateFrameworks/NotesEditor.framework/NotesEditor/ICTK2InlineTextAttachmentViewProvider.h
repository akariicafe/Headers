@class ICInlineTextAttachment, NSString, NSTextContainer, ICInlineAttachmentView, NSLayoutManager, NSTextStorage;

@interface ICTK2InlineTextAttachmentViewProvider : ICTK2TextAttachmentViewProvider <ICAttachmentFindable>

@property (readonly, nonatomic) ICInlineTextAttachment *inlineTextAttachment;
@property (readonly, nonatomic) ICInlineAttachmentView *inlineAttachmentView;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedSearchRange;
@property (readonly, nonatomic) NSTextContainer *displayTextTextContainer;
@property (readonly, nonatomic) NSLayoutManager *displayTextLayoutManager;
@property (readonly, nonatomic) NSTextStorage *displayTextTextStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void).cxx_destruct;
- (id)rectsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inFindableString:(id)a1;
- (void)scrollToRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inFindableString:(id)a1;
- (void)drawCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inFindableString:(id)a1 forContentView:(id)a2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1 inFindableString:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRangeWithinRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inFindableString:(id)a1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inFindableString:(id)a1;
- (id)viewForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inFindableString:(id)a1;
- (void)updateDisplayTextTextStorage;

@end
