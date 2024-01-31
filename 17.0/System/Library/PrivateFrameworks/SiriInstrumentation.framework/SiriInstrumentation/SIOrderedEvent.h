@class SISchemaTopLevelUnionType, NSUUID, SILogicalTimestamp, SIOrderedEventInternal;

@interface SIOrderedEvent : NSObject {
    SIOrderedEventInternal *_underlying;
    SILogicalTimestamp *_underlyingTimestamp;
}

@property (readonly, nonatomic) SILogicalTimestamp *logicalTimestamp;
@property (readonly, nonatomic) SISchemaTopLevelUnionType *topLevelUnionType;
@property (readonly, nonatomic) NSUUID *messageUUID;

+ (id)deserializeFromData:(id)a0;

- (id)serialize;
- (id)initWithData:(id)a0;
- (id)data;
- (void).cxx_destruct;
- (id)initWithTimestamp:(id)a0 messageUUID:(id)a1 topLevelUnionType:(id)a2;
- (id)initWithInternalType:(id)a0;

@end
