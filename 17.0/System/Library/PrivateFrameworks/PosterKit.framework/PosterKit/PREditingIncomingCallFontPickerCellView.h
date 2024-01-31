@class UIView;

@interface PREditingIncomingCallFontPickerCellView : PREditingFontPickerCellView

@property (readonly, nonatomic) UIView *contentView;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)configureWithFont:(id)a0 text:(id)a1;
- (void)displayImage:(id)a0;
- (void)displayText:(id)a0 usingFont:(id)a1;
- (unsigned short)glyphForText:(id)a0 usingFontRef:(struct __CTFont { } *)a1;
- (id)imageFromGlyph:(unsigned short)a0 fromFontRef:(struct __CTFont { } *)a1;
- (id)imageRepresentingFont:(id)a0 text:(id)a1;

@end
