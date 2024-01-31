@class UIActivityIndicatorView, AFSettingsConnection, PSDeleteButtonCell;
@protocol AssistantHistoryDelegate;

@interface AssistantHistoryViewController : PSListController {
    AFSettingsConnection *_settingsConnection;
    PSDeleteButtonCell *_deleteButtonCell;
    UIActivityIndicatorView *_indicatorView;
}

@property (weak, nonatomic) id<AssistantHistoryDelegate> delegate;

- (id)init;
- (id)specifiers;
- (void).cxx_destruct;
- (void)_presentErrorAlert;
- (void)_animateSpinnerIn;
- (void)_deleteSiriHistory;
- (id)_deletionResponseAlertForFailure;
- (void)_endIndicatorViewSpinning;
- (long long)_getDataSharingOptInStatus;
- (void)_handleDeleteSiriHistoryButtonPress;
- (void)_presentPrivacySheet;
- (void)_startIndicatorViewSpinning;

@end
