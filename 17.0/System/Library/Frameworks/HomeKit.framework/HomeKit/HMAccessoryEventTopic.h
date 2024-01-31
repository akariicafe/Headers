@interface HMAccessoryEventTopic : NSObject

+ (unsigned long long)suffixIDFromTopicSuffix:(id)a0;
+ (id)topicPrefixWithHomeUUID:(id)a0 accessoryUUID:(id)a1;
+ (id)filterTopicsReplacingWithIndex:(id)a0;
+ (id)topicFromSuffixID:(unsigned long long)a0 homeUUID:(id)a1 accessoryUUID:(id)a2;

@end
