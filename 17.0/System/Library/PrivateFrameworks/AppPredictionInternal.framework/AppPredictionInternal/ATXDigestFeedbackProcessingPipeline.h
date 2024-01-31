@class NSString, ATXNotificationDigestFeedbackLogger, ATXEngagementTrackedDigestBiomeStream;
@protocol BMBookmark;

@interface ATXDigestFeedbackProcessingPipeline : NSObject {
    id<BMBookmark> _bookmark;
    NSString *_path;
    ATXEngagementTrackedDigestBiomeStream *_trackedDigestStream;
    ATXNotificationDigestFeedbackLogger *_feedbackLogger;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)_fileExistsAtPath:(id)a0;
- (id)initWithBookmark:(id)a0 path:(id)a1 trackedDigestStream:(id)a2 digestFeedbackLogger:(id)a3;
- (void)_readBookmarkFromPath;
- (void)_writeBookmarkToPath;
- (id)initWithBookmark:(id)a0 path:(id)a1 trackedDigestStream:(id)a2;
- (void)logFeedbackForDigest:(id)a0;
- (void)logMetrics;
- (void)logMetricsForDigest:(id)a0;
- (void)logMetricsWithXPCActivity:(id)a0;

@end
