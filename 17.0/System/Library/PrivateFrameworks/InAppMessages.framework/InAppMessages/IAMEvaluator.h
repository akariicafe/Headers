@class NSArray, ICInAppMessageMetadataEntry, NSDictionary, NSDate, NSString;
@protocol IAMApplicationContextProvider;

@interface IAMEvaluator : NSObject {
    ICInAppMessageMetadataEntry *_currentMetadata;
    ICInAppMessageMetadataEntry *_currentProximityMetadata;
    NSArray *_messageEntries;
    NSDictionary *_metadataEntries;
    NSDate *_lastDisplayTimeForRestrictedPresentationPolicyGroup;
    NSDate *_lastDisplayTimeForNormalPresentationPolicyGroup;
    id<IAMApplicationContextProvider> _applicationContext;
    NSString *_hostBundleIdentifier;
    NSDictionary *_messageGroupsByGroupIdentifier;
}

@property (retain) NSArray *passingMessageEntries;
@property (retain) NSArray *messagesCloseToPassing;

+ (BOOL)_isMessageWithinDateRange:(id)a0;
+ (BOOL)applicationContext:(id)a0 allowsPresentationForPolicyGroup:(long long)a1 withLastDisplayTime:(id)a2;
+ (long long)_compareCurrentTimeWithMessageTime:(double)a0;

- (id)_contextPropertyWithName:(id)a0 forMessageGroupIdentifier:(id)a1;
- (unsigned long long)_calculateRuleProximity:(id)a0 forMessageEntry:(id)a1;
- (BOOL)_evaluateRule:(id)a0 forMessageEntry:(id)a1;
- (unsigned long long)_messageEntryProximity:(id)a0;
- (id)computePassingMessageEntries;
- (id)_valueForCondition:(id)a0 messageBundleIdentifier:(id)a1 messageMetadata:(id)a2;
- (unsigned long long)_calculateCompoundRuleProximity:(id)a0 forMessageEntry:(id)a1;
- (BOOL)_doesPresentationPolicyAllowPresentationOfMessage:(id)a0;
- (BOOL)_evaluateCondition:(id)a0 forMessageEntry:(id)a1;
- (void).cxx_destruct;
- (id)computeMessagesCloseToPassingWithProximityThreshold:(unsigned long long)a0;
- (BOOL)_evaluateCompoundRule:(id)a0 forMessageEntry:(id)a1;
- (id)_contextPropertyWithName:(id)a0 messageBundleIdentifier:(id)a1 conditionBundleIdentifier:(id)a2;
- (unsigned long long)_calculateConditionProximity:(id)a0 forMessageEntry:(id)a1;
- (id)initWithMessageEntries:(id)a0 metadataEntries:(id)a1 applicationContext:(id)a2 hostBundleIdentifier:(id)a3 messageGroups:(id)a4 lastDisplayTimeForRestrictedPresentationPolicyGroup:(id)a5 lastDisplayTimeForNormalPresentationPolicyGroup:(id)a6;
- (BOOL)_didCacheResourcesForMessageIfRequired:(id)a0;

@end
