@class NSUUID;

@interface SIOrderedEventInternal : PBCodable {
    void /* unknown type, empty encoding */ messageUUID;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ logicalTimestamp;
@property (nonatomic, retain) void /* unknown type, empty encoding */ tluEvent;
@property (nonatomic, copy) NSUUID *messageUUID;

+ (id)deserializeFrom:(id)a0;

- (id)init;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithLogicalTimestamp:(id)a0 messageUUID:(id)a1 tluEvent:(id)a2;
- (id)initWithLogicalTimestamp:(id)a0 tluEvent:(id)a1;

@end
