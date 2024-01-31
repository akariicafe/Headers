@class NSString;
@protocol ATXPETEventTracker2Protocol;

@interface ATXMagicalMomentsAppPredictorFeedback : NSObject <ATXProactiveSuggestionFeedbackListenerProtocol> {
    id<ATXPETEventTracker2Protocol> _tracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)_anchorTypeFromBundleIdToAnchorTypeMap:(id)a0 bundleId:(id)a1;
- (id)init;
- (id)getCurrentABGroup;
- (id)clientModelIds;
- (void)_handleEngagedProactiveSuggestion:(id)a0 consumerSubType:(unsigned char)a1 bundleIdToAnchorType:(id)a2;
- (id)initWithTracker:(id)a0;
- (void)_handleShownProactiveSuggestion:(id)a0 consumerSubType:(unsigned char)a1 bundleIdToAnchorType:(id)a2;
- (void)logEngagedMMMetricsEntryForBundle:(id)a0 consumerSubType:(unsigned char)a1 anchorType:(long long)a2 abGroup:(id)a3 score:(double)a4;
- (void).cxx_destruct;
- (void)receiveUIFeedbackResult:(id)a0;
- (void)logShownMMMetricsEntryForBundle:(id)a0 consumerSubType:(unsigned char)a1 anchorType:(long long)a2 abGroup:(id)a3 score:(double)a4;

@end
