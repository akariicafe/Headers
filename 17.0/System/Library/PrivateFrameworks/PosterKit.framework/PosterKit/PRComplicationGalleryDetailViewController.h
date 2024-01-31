@class NSArray, NSString, SBHApplicationWidgetCollection, UIImage, NSMutableDictionary;
@protocol SBHWidgetSheetViewControllerPresenter;

@interface PRComplicationGalleryDetailViewController : SBHAddWidgetSheetViewControllerBase <PRComplicationGalleryDetailViewDelegate, PRComplicationGalleryDetailPageViewControllerDelegate, SBHWidgetSheetViewControlling> {
    NSMutableDictionary *_userInfo;
}

@property (copy, nonatomic) NSArray *pageViewControllers;
@property (retain, nonatomic) SBHApplicationWidgetCollection *applicationWidgetCollection;
@property (copy, nonatomic) NSString *appName;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) BOOL showsCloseButton;
@property (nonatomic) BOOL showsBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<SBHWidgetSheetViewControllerPresenter> presenter;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;

- (void)viewWillAppear:(BOOL)a0;
- (void)_updateParallax;
- (void)loadView;
- (void)_updateContent;
- (void).cxx_destruct;
- (void)complicationGalleryView:(id)a0 didUpdateVisiblePagesWithAppearedBlock:(id /* block */)a1;
- (id)_complicationGalleryDetailView;
- (unsigned long long)addWidgetSheetLocation;
- (void)complicationGalleryDetailPageViewController:(id)a0 didSelectWidgetIconView:(id)a1;
- (void)complicationGalleryViewDidTapClose:(id)a0;
- (void)complicationGalleryViewShouldUpdateParallax:(id)a0;

@end
