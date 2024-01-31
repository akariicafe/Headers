@class ATXUserNotification, NSUUID, NSString;

@interface ATXUserNotificationLoggingEvent : NSObject <BMStoreData, NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXUserNotification *notification;
@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) NSUUID *modeUUID;
@property (readonly, nonatomic) unsigned long long deliveryReason;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)init;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initFromJSON:(id)a0;
- (id)json;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)eventCausesNotificationInactivity;
- (BOOL)eventCausesNotificationNonprominence;
- (id)initFromUserNotification:(id)a0 eventType:(long long)a1 timestamp:(double)a2;
- (id)initFromUserNotification:(id)a0 eventType:(long long)a1 timestamp:(double)a2 deliveryReason:(unsigned long long)a3;
- (id)initFromUserNotification:(id)a0 eventType:(long long)a1 timestamp:(double)a2 deliveryReason:(unsigned long long)a3 modeUUID:(id)a4;
- (BOOL)isEqualToATXUserNotificationLoggingEvent:(id)a0;
- (BOOL)isReceiveEvent;

@end
