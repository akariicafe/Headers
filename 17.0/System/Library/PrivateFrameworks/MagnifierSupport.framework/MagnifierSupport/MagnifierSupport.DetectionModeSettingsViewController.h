@interface MagnifierSupport.DetectionModeSettingsViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UITableViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_peopleDetectionSettingsViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageCaptionSettingsViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doorDetectionSettingsViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_internalDetectionOptionsViewController;
    void /* unknown type, empty encoding */ languageTranslator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pointSpeakSettingsViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textDetectionSettingsViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_detectionModeUniversalSettingsViewController;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ delegate;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)presentationControllerDidDismiss:(id)a0;
- (BOOL)_canShowWhileLocked;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)handleDoneButtonTap:(id)a0;
- (void)handleInfoButtonTap:(id)a0;

@end
