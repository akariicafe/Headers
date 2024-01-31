@class PXFeatureSpecManager, NSString, PXPeopleCandidateBannerView;
@protocol PXPeopleMeViewControllerDataSource, PXPeopleMeViewControllerDelegate, PXPerson;

@interface PXPeopleMeViewController : UIViewController <PXChangeObserver, PXPeopleCandidateBannerViewDelegate>

@property (retain) id<PXPerson> suggestedPerson;
@property (retain, nonatomic) PXPeopleCandidateBannerView *bannerView;
@property (retain, nonatomic) PXFeatureSpecManager *specManager;
@property (readonly, nonatomic) id<PXPeopleMeViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<PXPeopleMeViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (void)_confirmMe:(id)a0;
- (void)_dismissViewControllerAsConfirmed:(BOOL)a0;
- (void)_rejectMe:(id)a0;
- (void)bannerViewDidSelectNotNow:(id)a0;
- (void)bannerViewDidSelectPrimaryAction:(id)a0;
- (id)initWithDataSource:(id)a0 dismissHandler:(id /* block */)a1;

@end
