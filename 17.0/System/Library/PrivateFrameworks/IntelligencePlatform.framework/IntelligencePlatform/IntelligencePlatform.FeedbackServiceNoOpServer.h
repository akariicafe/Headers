@interface IntelligencePlatform.FeedbackServiceNoOpServer : NSObject <GDFeedbackServiceProtocol>

- (id)init;
- (BOOL)logWithFeedbackData:(id)a0 type:(id)a1 variant:(id)a2 eventId:(long long)a3 withTimestamp:(id)a4 shouldProcessImmediately:(BOOL)a5 error:(id *)a6;

@end
