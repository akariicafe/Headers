@class NSString, UILabel, DOCTag, UIMenu;
@protocol DOCTagsCollectionItemContentViewDelegate;

@interface DOCTagsCollectionItemContentView : UIView <DOCTagsCollectionCellMenuTarget>

@property (readonly, nonatomic) UILabel *tagNameLabel;
@property (copy, nonatomic) DOCTag *tagValue;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL isMixed;
@property (nonatomic) double maxWidth;
@property (nonatomic) double cornerRadius;
@property (weak, nonatomic) id<DOCTagsCollectionItemContentViewDelegate> delegate;
@property (readonly, nonatomic) UIMenu *menuForContextMenuPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForLastBaselineLayout;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateColors;
- (void)updateAttributedString;
- (void)removeTag:(id)a0;
- (void)updateForChangedTraitsAffectingFonts;
- (id)_tagCollectionAppearance;
- (id)fontForTagSizing;

@end
