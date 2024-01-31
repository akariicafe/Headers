@class NSObject, SiriAnalyticsPreferences;
@protocol OS_dispatch_queue;

@interface AssistantSiriAnalyticsMessageTailing : NSObject {
    SiriAnalyticsPreferences *_preferences;
    NSObject<OS_dispatch_queue> *_messageTailingQueue;
}

- (id)init;
- (void)tailMessages:(id)a0;
- (void)_tailMessage:(id)a0 timestamp:(unsigned long long)a1 messageUUID:(id)a2 clockIdentifier:(id)a3;
- (void)_tailMessages:(id)a0;
- (void)tailMessage:(id)a0 timestamp:(unsigned long long)a1 messageUUID:(id)a2 clockIdentifier:(id)a3;
- (id)initWithPreferences:(id)a0;
- (void).cxx_destruct;
- (void)_tailMessage:(id)a0;
- (void)tailMessage:(id)a0;
- (void)tailAnyEvents:(id)a0;

@end
