@class DOCLargeTagView, DOCTag;

@interface DOCTagEditorTagCell : UICollectionViewCell

@property (retain, nonatomic) DOCLargeTagView *tagView;
@property (retain, nonatomic) DOCTag *tagValue;
@property (nonatomic) BOOL mixedSelection;

- (void)updateStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)tagValue;
- (void)setTagValue:(id)a0;

@end
