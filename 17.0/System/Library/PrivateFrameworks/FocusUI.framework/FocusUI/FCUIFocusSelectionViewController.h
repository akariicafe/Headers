@class FCUIActivityListView, NSString, FCActivityManager, FCUIActivityControl, MTMaterialView;
@protocol FCUIFocusSelectionViewControllerDelegate;

@interface FCUIFocusSelectionViewController : UIViewController <FCActivityManagerObserving, UIScrollViewDelegate> {
    MTMaterialView *_backgroundMaterialView;
    FCUIActivityListView *_activityListView;
    NSString *_subtitle;
}

@property (retain, nonatomic, getter=_activityManager, setter=_setActivityManager:) FCActivityManager *activityManager;
@property (retain, nonatomic) NSString *selectedActivityIdentifier;
@property (retain, nonatomic) FCUIActivityControl *selectedControl;
@property (weak, nonatomic) id<FCUIFocusSelectionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)selectionControllerWithSelectedActivityIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)_closeButtonTapped:(id)a0;
- (id)_activityControlForActivity:(id)a0;
- (void)_configureActivityListView;
- (void)_setSelectedControl:(id)a0;
- (id)initWithSelectedActivityIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2;

@end
