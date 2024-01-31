@class NSString, NSMapTable, NSHashTable, SBHIconImageCache, SBFolderIconImageSharedCache;
@protocol SBIconListLayout;

@interface SBFolderIconImageCache : NSObject <SBHIconLayoutHidingAssertionDelegate, SBFolderIconImageSharedCacheObserver, SBFolderIconGridCellImageProvider, SBHIconLayoutHiding> {
    NSMapTable *_folderIconObservers;
    NSHashTable *_layoutHidingAssertions;
}

@property (readonly, nonatomic) id<SBIconListLayout> listLayout;
@property (readonly, nonatomic) SBFolderIconImageSharedCache *sharedCache;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache;
@property (readonly, nonatomic) unsigned long long numberOfCachedImages;
@property (readonly, nonatomic) unsigned long long numberOfCacheHits;
@property (readonly, nonatomic) unsigned long long numberOfCacheMisses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)drawTreatmentForIcon:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)imageForPageAtIndex:(unsigned long long)a0 inFolderIcon:(id)a1 listLayout:(id)a2 gridCellImageProvider:(id)a3 pool:(id)a4;
+ (BOOL)needsTreatmentForIcon:(id)a0;
+ (id)defaultListLayout;
+ (id)gridCellImageOfSize:(struct CGSize { double x0; double x1; })a0 forIcon:(id)a1 iconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a2;
+ (id)gridCellImageOfSize:(struct CGSize { double x0; double x1; })a0 forIconImage:(id)a1;

- (void)layoutHidingAssertionDidChange:(id)a0;
- (void)layoutHidingAssertionDidInvalidate:(id)a0;
- (id)beginHidingIconsFromLayout:(id)a0 reason:(id)a1 options:(unsigned long long)a2;
- (void)removeObserver:(id)a0 forFolderIcon:(id)a1;
- (id)init;
- (BOOL)shouldSkipGridCellImageForIcon:(id)a0;
- (void)cacheGridCellImagesForIcons:(id)a0;
- (id)initWithListLayout:(id)a0 sharedCache:(id)a1;
- (id)imageForPageAtIndex:(unsigned long long)a0 inFolderIcon:(id)a1;
- (void)rebuildImagesForFolderIcon:(id)a0;
- (void)folderIconImageSharedCache:(id)a0 didUpdateImagesForFolderIcon:(id)a1;
- (id)gridCellImageForIcon:(id)a0;
- (void)informObserversOfUpdateForAllFolderIcons;
- (id)initWithListLayout:(id)a0;
- (void).cxx_destruct;
- (void)informObserversOfUpdateForFolderIcon:(id)a0;
- (void)rebuildImagesReferencingIcons:(id)a0;
- (void)addObserver:(id)a0 forFolderIcon:(id)a1;
- (id)gridCellImageOfSize:(struct CGSize { double x0; double x1; })a0 forIcon:(id)a1 iconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a2;

@end
