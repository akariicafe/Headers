@class NSUUID, SiriAnalyticsLogicalTimeStamp, SISchemaTopLevelUnionType;

@interface SiriAnalyticsMessage : NSObject

@property (retain, nonatomic) SiriAnalyticsLogicalTimeStamp *logicalTimestamp;
@property (copy, nonatomic) NSUUID *messageUUID;
@property (retain, nonatomic) SISchemaTopLevelUnionType *underlyingMessage;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMessageUUID:(id)a0 logicalTimestamp:(id)a1 underlying:(id)a2;
- (id)storageRepresentation;

@end
