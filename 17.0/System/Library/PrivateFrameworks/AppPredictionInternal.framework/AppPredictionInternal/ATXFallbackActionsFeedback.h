@class NSString;

@interface ATXFallbackActionsFeedback : NSObject <ATXProactiveSuggestionFeedbackListenerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)receiveUIFeedbackResult:(id)a0 histogramManager:(id)a1;
- (id)clientModelIds;
- (void)receiveUIFeedbackResult:(id)a0;

@end
