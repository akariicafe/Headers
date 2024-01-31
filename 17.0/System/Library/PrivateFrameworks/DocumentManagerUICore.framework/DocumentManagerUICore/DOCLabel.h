@class NSNumber;

@interface DOCLabel : UILabel <DOCLabelSizing> {
    NSNumber *useAttributedTextNumber;
    BOOL _intrinsicContentSizeShortcutDisabled;
}

@property (readonly) struct CGSize { double x0; double x1; } doc_effectiveContentSize;

- (void)setAttributedText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_useShortcutIntrinsicContentSize;
- (void)doc_commonInit;
- (void)updateForChangedTraitsAffectingFonts;

@end
