@interface HMDAccessoryEventsGenerated : NSObject

+ (id)accessoryIndexForAccessoryUUID:(id)a0 homeUUID:(id)a1;
+ (id)allTopics;
+ (id)appleMediaAccessoryTopicsForAccessoryUUID:(id)a0 homeUUID:(id)a1;
+ (id)endpointAccessoryTopicsForAccessoryUUID:(id)a0 homeUUID:(id)a1;
+ (id)forwardingTopicsForTopics:(id)a0 residentAccessoryUUID:(id)a1 homeUUID:(id)a2;
+ (id)homePodAccessoryTopicsForAccessoryUUID:(id)a0 homeUUID:(id)a1;
+ (id)indexTopicForTopic:(id)a0;
+ (id)topicMap;
+ (BOOL)topicSuffix:(id)a0 isPartOfIndex:(id)a1;
+ (id)topicsRemovingAccessoryTopics:(id)a0 accessoryUUID:(id)a1;

@end
