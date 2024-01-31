@interface ATXAppDirectoryLogger : NSObject

- (id)_retrieveAllUnprocessedEvents;
- (id)_retrieveLastLogProcessedDate;
- (id)_retrieveSessionsFromUnprocessedEvents:(id)a0 lastSessionEndDate:(id *)a1;
- (void)_storeLastLogProcessedDate:(id)a0;
- (id)_summarizeSession:(id)a0;
- (void)_uploadToCoreAnalytics:(id)a0;
- (void)uploadSummariesToCoreAnalyticsWithActivity:(id)a0;

@end
