@class UITextView, NSString, PXSharedLibraryLegacyDevicesFallbackMonitor, OBBoldTrayButton, PXSharedLibraryLegacyDevicesRemoteController;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryAssistantWelcomeViewController : OBWelcomeController <PXAssistantViewController, PXChangeObserver> {
    PXSharedLibraryLegacyDevicesFallbackMonitor *_legacyDevicesFallbackMonitor;
    PXSharedLibraryLegacyDevicesRemoteController *_legacyDevicesRemoteController;
    UITextView *_textView;
    OBBoldTrayButton *_startButton;
    BOOL _wantsToStepForward;
}

@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (double)_contentViewHeight;
- (void)cancelButtonTapped:(id)a0;
- (void)_updateTextView;
- (void)_checkLegacyDeviceMonitorAndAttemptStepForward;
- (void)_forceStepForward;
- (BOOL)_isLegacyDevicesFallbackMonitorEnabledAndReady;
- (void)_legacyDevicesFallbackMonitorChangedState;
- (void)_legacyDevicesRemoteControllerChangedState;
- (id)initWithLegacyDevicesFallbackMonitor:(id)a0 legacyDevicesRemoteController:(id)a1;
- (void)startButtonTapped:(id)a0;

@end
