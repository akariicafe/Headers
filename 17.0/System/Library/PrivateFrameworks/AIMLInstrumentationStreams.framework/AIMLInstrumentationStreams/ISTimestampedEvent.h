@interface ISTimestampedEvent : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ timestamp;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ orderedEvent;

- (id)init;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end
