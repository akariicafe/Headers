@class NSArray, NSString, SBIconView, SBHWidgetWrapperView;
@protocol SBHWidgetWrapperViewControllerDelegate, SBIconViewProviding, SBIconListLayoutProvider, SBHAddWidgetSheetGalleryItem;

@interface SBHWidgetWrapperViewController : UIViewController <SBIconViewObserver, SBIconViewActionDelegate>

@property (nonatomic) BOOL titleAndSubtitleVisible;
@property (readonly, nonatomic) SBIconView *iconView;
@property (nonatomic, getter=isDragging) BOOL dragging;
@property (copy, nonatomic) id /* block */ defaultBackgroundViewProvider;
@property (copy, nonatomic) id /* block */ defaultBackgroundViewConfigurator;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } contentTransform;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } shadowTransform;
@property (readonly, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (readonly, weak, nonatomic) id<SBIconViewProviding> iconViewProvider;
@property (readonly, nonatomic) id<SBHAddWidgetSheetGalleryItem> galleryItem;
@property (readonly, copy, nonatomic) NSArray *supportedSizeClasses;
@property (readonly, nonatomic) SBHWidgetWrapperView *wrapperView;
@property (nonatomic) unsigned long long indexOfSelectedSizeClass;
@property (nonatomic) long long selectedSizeClass;
@property (nonatomic) BOOL forcesEdgeAntialiasing;
@property (nonatomic) BOOL usesAmbientScaleFactorForRemovableBackgroundItems;
@property (weak, nonatomic) id<SBHWidgetWrapperViewControllerDelegate> delegate;
@property (nonatomic) long long backgroundType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iconTouchBegan:(id)a0;
- (void)iconTapped:(id)a0;
- (void)dealloc;
- (void)iconView:(id)a0 didChangeCustomImageViewController:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)iconViewDidEndDrag:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)iconViewWillBeginDrag:(id)a0;
- (id)_widgetDragHandler;
- (id)initWithGalleryItem:(id)a0 titleAndSubtitleVisible:(BOOL)a1 listLayoutProvider:(id)a2 iconViewProvider:(id)a3;
- (void)setGalleryItem:(id)a0;
- (void)_configureCustomImageViewController:(id)a0 iconView:(id)a1;
- (void)_configureIconView:(id)a0 forIcon:(id)a1;
- (void)_removeIconViewKeepObserving:(BOOL)a0;
- (void)_updateAvocadoHostViewController;
- (id /* block */)_widgetBackgroundViewConfigurator;
- (id /* block */)_widgetBackgroundViewProvider;
- (long long)wrapperViewBackgroundType;

@end
