@class PKSelectionStatisticsSession;

@interface PKSelectionStatisticsManager : NSObject {
    PKSelectionStatisticsSession *_selectionSession;
    struct CGPoint { double x; double y; } _lastContentOffset;
}

+ (id)sharedStatisticsManager;

- (void).cxx_destruct;
- (void)recordDidMakeSelectionWithType:(long long)a0;
- (void)_endSelectionSession;
- (void)_recordSelectionSession:(id)a0;
- (void)logEndSelectionSessionIfNecessary;
- (void)logScrollEventWithContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)logSelectionAction:(long long)a0;
- (void)recordLassoSelectionEventWithContentType:(long long)a0;
- (void)recordSmartSelectionEventWithType:(long long)a0 contentType:(long long)a1 gestureInvoked:(long long)a2;

@end
