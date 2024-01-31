@interface BMCoreAnalyticsEvents : NSObject

+ (void)sendDeletionPolicyMetrics:(id)a0 stream:(id)a1 numDeleted:(unsigned int)a2 exception:(BOOL)a3;
+ (id)dictionaryWithUnreadableSegment:(double)a0 stream:(long long)a1 size:(unsigned int)a2;
+ (void)sendCoderUsageWithClassName:(id)a0;
+ (void)sendDatavaultEntitlementUsage:(id)a0;
+ (void)sendBookmarkResumeFailureTime:(double)a0 bookmarkCreationTime:(double)a1 publicStream:(long long)a2;
+ (void)sendAllStreamsEventWritten:(BOOL)a0 size:(unsigned int)a1 streamIdentifier:(id)a2;
+ (void)sendPrunePublicStream:(long long)a0 deletionInterval:(double)a1 eventDeletionCount:(unsigned int)a2;
+ (id)dictionaryWithPrunePublicStream:(long long)a0 deletionInterval:(double)a1 eventDeletionCount:(unsigned int)a2;
+ (void)sendUnreadableEventTime:(double)a0 stream:(long long)a1 segmentTime:(double)a2;
+ (id)dictionaryWithUnreadableEventTime:(double)a0 stream:(long long)a1 segmentTime:(double)a2;
+ (id)dictionaryWithAllStreamsEventWritten:(BOOL)a0 size:(unsigned int)a1 streamIdentifier:(id)a2;
+ (id)dictionaryWithCoderUsageByProcess:(id)a0 className:(id)a1;
+ (id)dictionaryWithBookmarkResumeFailureTime:(double)a0 bookmarkCreationTime:(double)a1 publicStream:(long long)a2;
+ (void)sendEvent:(id)a0 payload:(id)a1;
+ (id)dictionaryWithDatavaultByUsageExecutableName:(id)a0;
+ (id)dictionaryWithDeletionPolicyMetrics:(id)a0 stream:(id)a1 numDeleted:(unsigned int)a2 exception:(BOOL)a3;
+ (void)sendUnreadableSegment:(double)a0 stream:(long long)a1 size:(unsigned int)a2;

@end
