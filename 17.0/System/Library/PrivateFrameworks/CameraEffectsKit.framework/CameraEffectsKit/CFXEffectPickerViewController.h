@class NSArray, NSString, CFXEffectPickerView, UIImage, NSObject, CFXEffectType;
@protocol OS_dispatch_queue, CFXEffectPickerViewControllerDelegate;

@interface CFXEffectPickerViewController : UIViewController <CFXEffectPickerViewDelegate, CFXEffectPickerViewDataSource, CFXFilterEffectPickerViewDataSource, CFXFilterEffectPickerViewDelegate, FunCamFilterPickerPresentationDelegate>

@property (retain, nonatomic) NSArray *effects;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *effectLoadingQueue;
@property (retain, nonatomic) CFXEffectPickerView *pickerView;
@property (nonatomic, getter=isPreviewing) BOOL previewing;
@property (retain, nonatomic) UIImage *previewBackgroundImage;
@property (retain, nonatomic) CFXEffectType *effectType;
@property (weak, nonatomic) id<CFXEffectPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)effectPickerViewController;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)willMoveToParentViewController:(id)a0;
- (void)startPreviewing;
- (void)stopPreviewing;
- (void)CFX_configureEffect:(id)a0 previewSizeInPixels:(struct CGSize { double x0; double x1; })a1;
- (void)CFX_loadEffectsForType:(id)a0 completion:(id /* block */)a1;
- (void)CFX_restartPreviewing;
- (void)CFX_stopPreviewing;
- (id)effectPickerView:(id)a0 effectAtIndex:(long long)a1;
- (id)CFX_createPickerViewForEffectType:(id)a0;
- (unsigned long long)CFX_indexForEffectIdentifier:(id)a0;
- (void)effectPickerView:(id)a0 didPickEffectAtIndex:(long long)a1;
- (void)effectPickerView:(id)a0 effectAtIndex:(long long)a1 forPreviewingAtSizeInPixels:(struct CGSize { double x0; double x1; })a2 completionBlock:(id /* block */)a3;
- (id)effectPickerView:(id)a0 effectIdentifierAtIndex:(long long)a1;
- (id)effectPickerView:(id)a0 effectTitleAtIndex:(long long)a1;
- (unsigned long long)effectPickerView:(id)a0 indexForEffectID:(id)a1;
- (void)effectPickerViewDidScroll:(id)a0;
- (void)filterPickerPresentationModeDidChange;
- (unsigned long long)numberOfEffectsInPickerView:(id)a0;
- (unsigned long long)selectedFilterIndexForFilterPickerView:(id)a0;
- (BOOL)shouldDisplayExpandedModeForFilterPickerView:(id)a0;
- (BOOL)shouldRotateCellsForDeviceOrientation;

@end
