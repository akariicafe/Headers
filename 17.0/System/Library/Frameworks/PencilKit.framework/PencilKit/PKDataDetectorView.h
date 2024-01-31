@class PKDataDetectorItem, NSArray, NSDictionary;

@interface PKDataDetectorView : PKDetectionView

@property (retain, nonatomic) PKDataDetectorItem *dataDetectorItem;
@property (copy, nonatomic) NSArray *allItems;
@property (retain, nonatomic) NSDictionary *dataDetectorContext;

- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (id)accessibilityIdentifier;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)item;
- (id)accessibilityValue;
- (double)_underlineThickness;
- (void)_highlightWithCompletion:(id /* block */)a0;
- (id)initWithDataDetectorItem:(id)a0 allItems:(id)a1;
- (void)tapHandler:(id)a0;

@end
