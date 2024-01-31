@interface CATIDSServiceConnectionConfiguration : NSObject

@property (nonatomic) long long maxDataSendSize;
@property (nonatomic) unsigned long long keepAliveAttemptCount;
@property (nonatomic) double keepAliveCheckinInterval;
@property (nonatomic) double invitationAcknowledgeTimeout;
@property (nonatomic) double missingItemsCheckinInterval;
@property (nonatomic) double messageQueueFlushPromptInterval;

- (id)init;

@end
