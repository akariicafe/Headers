@interface ToggleReaderActivity : TabDocumentActivity

- (id)activityType;
- (long long)actionType;
- (id)activityTitle;
- (BOOL)_isEnabled;
- (id)_systemImageName;
- (BOOL)_isDisabled;
- (void)performActivityWithTabDocument:(id)a0;

@end
