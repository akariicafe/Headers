@class NSString, PXBrowserSummaryController;
@protocol PXLibrarySummaryDataSource, PXDisplayAssetCollection, PXLibrarySummaryOutputPresenter;

@interface PXCuratedLibrarySummaryHelper : NSObject <PXBrowserSummaryControllerDataSource, PXChangeObserver> {
    BOOL _isPerformingUpdates;
    BOOL _isPerformingChanges;
    struct { BOOL title; BOOL subtitle; BOOL topMostAssetCollection; } _needsUpdateFlags;
    struct { BOOL visibleContentSnapshot; BOOL topMostAssetCollection; BOOL shouldUpdateImmediately; } _dataSourceRespondsTo;
    struct { BOOL setTitle; BOOL setSubtitle; BOOL setAttributedTitle; BOOL defaultAttributes; BOOL emphasizedAttributes; } _outputPresenterRespondsTo;
}

@property (readonly, nonatomic) PXBrowserSummaryController *summaryController;
@property (retain, nonatomic, setter=_setTopMostAssetCollection:) id<PXDisplayAssetCollection> topMostAssetCollection;
@property (weak, nonatomic) id<PXLibrarySummaryDataSource> dataSource;
@property (weak, nonatomic) id<PXLibrarySummaryOutputPresenter> outputPresenter;
@property (nonatomic) BOOL shouldUseAbbreviatedDates;
@property (readonly, nonatomic) BOOL shouldShowImportDates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_performChanges:(id /* block */)a0;
- (void)_invalidateTitle;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_invalidateSubtitle;
- (void)_updateIfNeeded;
- (void)_updateTopMostAssetCollection;
- (void)_updateSubtitleFromSummaryController;
- (void).cxx_destruct;
- (void)_updateTitleFromSummaryController;
- (void)_updateTitle;
- (void)_updateSubtitle;
- (void)_invalidateTopMostAssetCollection;
- (id)visibleContentSnapshotForBrowserSummaryController:(id)a0;
- (BOOL)browserSummaryControllerShouldUpdateImmediately:(id)a0;
- (void)visibleContentDidChange;

@end
