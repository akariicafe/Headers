@class NSArray, _TtC13EventKitTCCUI19EventPreviewWrapper, EKEventStore;

@interface EventKitTCCUIFactory : NSObject {
    EKEventStore *_eventStore;
    NSArray *_allCalendars;
    _TtC13EventKitTCCUI19EventPreviewWrapper *_previewWrapper;
}

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (id)previewViewController;
- (id)previewTableView;
- (id)settingsViewSubtitle;
- (int)countEventsInTheNextYear;
- (id)settingsPreviewViewController;

@end
