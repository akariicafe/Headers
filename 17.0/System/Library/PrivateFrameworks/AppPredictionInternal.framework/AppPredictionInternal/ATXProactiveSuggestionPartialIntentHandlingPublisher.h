@class BPSPublisher, BMBookmarkablePublisher;

@interface ATXProactiveSuggestionPartialIntentHandlingPublisher : NSObject

@property (retain, nonatomic) BPSPublisher *uiFeedbackPublisher;
@property (retain, nonatomic) BMBookmarkablePublisher *appLaunchPublisher;
@property (retain, nonatomic) BMBookmarkablePublisher *intentPublisher;

- (id)_timestampFromEvent:(id)a0;
- (id)partialIntentUIFeedbackPublisher;
- (void).cxx_destruct;
- (id)initWithUIFeedbackPublisher:(id)a0 appLaunchPublisher:(id)a1 intentPublisher:(id)a2;

@end
