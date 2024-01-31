@class PXStoryModel, NSString, NSTimer, PXGLoadingStatusComponent, PXStoryAnimationController, NSAttributedString, PXStoryRelatedController;
@protocol PXStoryDiagnosticHUDDataSource;

@interface PXStoryDiagnosticHUDLayout : PXGLayout <PXChangeObserver, PXGEntityChangeObserver, PXGStringSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    PXGLoadingStatusComponent *_loadingStatusComponent;
    BOOL _hasPendingContentUpdate;
    unsigned int _HUDTextSpriteIndex;
    unsigned int _badgeSpriteIndex;
    unsigned short _contentVersion;
    BOOL _wantsHUDContentVisible;
}

@property (retain, nonatomic) NSAttributedString *HUDText;
@property (readonly, nonatomic) NSAttributedString *badgeText;
@property (readonly, nonatomic) id<PXStoryDiagnosticHUDDataSource> dataSource;
@property (readonly, nonatomic) NSTimer *timer;
@property (retain, nonatomic) PXStoryRelatedController *relatedController;
@property (retain, nonatomic) PXStoryModel *model;
@property (retain, nonatomic) PXStoryAnimationController *animationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (void)entityManagerDidChange;
- (id)axSpriteIndexes;
- (void)update;
- (void)_invalidateContent;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)initWithDataSource:(id)a0;
- (void)_updateContent;
- (void).cxx_destruct;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)safeAreaInsetsDidChange;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)_enumerateDiagnosticHUDContentProvidersUsingBlock:(id /* block */)a0;
- (void)_invalidateControllers;
- (void)_invalidateModel;
- (BOOL)_shouldDisplayContentForHUDType:(long long)a0;
- (void)_updateControllers;
- (void)_updateHUDText;
- (void)_updateModel;
- (void)entityManager:(id)a0 componentDidChange:(id)a1;

@end
