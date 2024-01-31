@interface HMDAssistantAccessControlModifiedEvent : HMMLogEvent

@property (nonatomic) BOOL isEnabled;
@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL areActivityNotificationsEnabledForPersonalRequests;
@property (nonatomic) unsigned long long numEnabledAccessories;
@property (nonatomic) unsigned long long numCapableAccessories;

+ (id)eventWithIsEnabled:(BOOL)a0 options:(unsigned long long)a1 areActivityNotificationsEnabledForPersonalRequests:(BOOL)a2 numEnabledAccessories:(unsigned long long)a3 numCapableAccessories:(unsigned long long)a4;

@end
