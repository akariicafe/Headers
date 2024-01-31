@class NSUUID, SISchemaTopLevelUnionType;

@interface SiriAnalyticsTimeAnnotatedMessage : NSObject

@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSUUID *streamUUID;
@property (copy, nonatomic) NSUUID *messageUUID;
@property (retain, nonatomic) SISchemaTopLevelUnionType *message;

- (void).cxx_destruct;

@end
