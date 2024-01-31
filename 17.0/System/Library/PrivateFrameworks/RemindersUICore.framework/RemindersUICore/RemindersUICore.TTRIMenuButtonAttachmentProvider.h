@interface RemindersUICore.TTRIMenuButtonAttachmentProvider : NSTextAttachmentViewProvider {
    void /* unknown type, empty encoding */ lightBackgroundAlpha;
    void /* unknown type, empty encoding */ darkBackgroundAlpha;
}

- (void)loadView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForAttributes:(id)a0 location:(id)a1 textContainer:(id)a2 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 position:(struct CGPoint { double x0; double x1; })a4;
- (id)initWithTextAttachment:(id)a0 parentView:(id)a1 textLayoutManager:(id)a2 location:(id)a3;

@end
