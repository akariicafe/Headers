@class UIColor, NSMutableDictionary, NSArray;
@protocol PUImportSectionedGridLayoutDelegate;

@interface PUImportSectionedGridLayout : PUSectionedGridLayout {
    BOOL _delegateSupportsPerSectionHighlight;
}

@property (retain, nonatomic) NSMutableDictionary *sectionDecorationAttributesBySection;
@property (retain, nonatomic) NSMutableDictionary *preUpdateSectionDecorationAttributesBySection;
@property (retain, nonatomic) UIColor *emphasizedSectionBackgroundColor;
@property (retain, nonatomic) UIColor *emphasizedSectionBottomStrokeColor;
@property (nonatomic) double emphasizedSectionBottomStrokeWidth;
@property (retain, nonatomic) NSArray *sectionIndexPathsBeingDeleted;
@property (weak, nonatomic) id<PUImportSectionedGridLayoutDelegate> delegate;

+ (Class)layoutAttributesClass;

- (void)prepareLayout;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (id)createLayoutAttributesForSectionBackgroundAtSection:(unsigned long long)a0;
- (void)recreateSectionDecorationAttributes;

@end
