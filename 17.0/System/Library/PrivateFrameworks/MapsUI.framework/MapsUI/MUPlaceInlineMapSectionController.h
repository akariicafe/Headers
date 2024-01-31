@class UIView, MUPlaceSectionFooterViewModel, NSString, NSArray, MUPlaceSectionHeaderViewModel, MUPlaceCallToActionAppearance, MKPlaceInlineMapViewControllerConfiguration, MKPlaceInlineMapViewController, UIViewController, CLLocation, MKPlacePoisInlineMapViewController, MUPlaceSectionView;
@protocol MUInfoCardAnalyticsDelegate;

@interface MUPlaceInlineMapSectionController : MUPlaceSectionController <MKPlaceInlineMapViewControllerDelegate, MUPlaceSectionControlling> {
    MKPlaceInlineMapViewController *_inlineMapViewController;
    MKPlacePoisInlineMapViewController *_poiInlineMapViewController;
    MUPlaceSectionView *_sectionView;
    MKPlaceInlineMapViewControllerConfiguration *_configuration;
}

@property (retain, nonatomic) CLLocation *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) UIViewController *sectionViewController;

- (void).cxx_destruct;
- (BOOL)inlineMapViewControllerDidSelectMap:(id)a0;
- (void)_setupInlineMap;
- (int)analyticsModuleType;
- (id)initWithMapItem:(id)a0 configuration:(id)a1;
- (BOOL)isImpressionable;
- (void)updateWithMapItem:(id)a0;

@end
