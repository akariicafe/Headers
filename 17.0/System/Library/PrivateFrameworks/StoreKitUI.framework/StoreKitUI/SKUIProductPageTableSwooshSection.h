@class NSString, SKUIResourceLoader, SKUILockupSwooshArtworkLoader, SKUIMissingItemLoader, SKUIColorScheme, SKUILockupSwooshViewController, UIViewController, SKUISwooshPageComponent;

@interface SKUIProductPageTableSwooshSection : SKUIProductPageTableSection <SKUIMissingItemDelegate, SKUISwooshViewControllerDelegate> {
    SKUILockupSwooshArtworkLoader *_artworkLoader;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUISwooshPageComponent *_swooshComponent;
    SKUILockupSwooshViewController *_swooshViewController;
}

@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (retain, nonatomic) SKUIResourceLoader *resourceLoader;
@property (readonly, nonatomic) UIViewController *swooshViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_artworkLoader;
- (id)_missingItemLoader;
- (id)_swooshViewController;
- (id)headerViewForTableView:(id)a0;
- (id)initWithItems:(id)a0 title:(id)a1;
- (id)initWithLockups:(id)a0 title:(id)a1;
- (void)missingItemLoader:(id)a0 didLoadItems:(id)a1 invalidItemIdentifiers:(id)a2;
- (void)swoosh:(id)a0 didSelectCellAtIndex:(long long)a1;
- (id)swoosh:(id)a0 imageForCellAtIndex:(long long)a1;

@end
