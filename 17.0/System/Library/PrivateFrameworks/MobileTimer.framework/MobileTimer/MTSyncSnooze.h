@class NSString, NSDate;

@interface MTSyncSnooze : NSObject <MTProtoBufferSerializable, MTSerializable, SYChange, MTSyncable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly, nonatomic) long long changeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *snoozeDate;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) float syncVersion;
@property (readonly, nonatomic) unsigned long long syncType;
@property (readonly, nonatomic) NSString *syncIdentifier;
@property (readonly, nonatomic) NSDate *syncDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deserialize:(id)a0;
+ (id)syncSnoozeOfObjectWithIdentifier:(id)a0 snoozeDate:(id)a1 date:(id)a2 version:(float)a3;
+ (id)syncSnoozeOfObjectWithIdentifier:(id)a0 snoozeDate:(id)a1 date:(id)a2;

- (id)serialize;
- (void)encodeWithCoder:(id)a0;
- (void)serializeWithSerializer:(id)a0;
- (void).cxx_destruct;
- (id)initFromDeserializer:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)conflicts:(id)a0;
- (id)initWithSnoozedObjectIdentifier:(id)a0 snoozeDate:(id)a1 date:(id)a2 version:(float)a3;
- (id)preferred:(id)a0;

@end
