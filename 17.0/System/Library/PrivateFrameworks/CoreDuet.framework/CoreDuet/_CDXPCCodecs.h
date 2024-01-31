@interface _CDXPCCodecs : NSObject

+ (id)supportedClassesToUnarchive;
+ (id)_log;
+ (id)fetchProxySourceDeviceUUIDEvent;
+ (BOOL)addDeviceIDs:(id)a0 toDictionary:(id)a1 error:(id *)a2;
+ (void)addError:(id)a0 toReply:(id)a1;
+ (id)deviceIDsFromDictionary:(id)a0 error:(id *)a1;
+ (long long)eventTypeWithEvent:(id)a0;
+ (id)fetchPropertiesReplyWithEvent:(id)a0 error:(id)a1;
+ (id)fetchProxySourceDeviceUUIDReplyWithEvent:(id)a0 sourceDeviceUUID:(id)a1 error:(id)a2;
+ (id)keepAliveEventWithKeepAlive:(BOOL)a0 error:(id *)a1;
+ (BOOL)keepAliveFromKeepAliveEvent:(id)a0 error:(id *)a1;
+ (id)keepAliveReplyWithEvent:(id)a0 error:(id)a1;
+ (id)notificationEventWithRegistrationIdentifier:(id)a0 info:(id)a1 error:(id *)a2;
+ (BOOL)parseNotificationEvent:(id)a0 registrationIdentifier:(id *)a1 info:(id *)a2 error:(id *)a3;
+ (id)parseProxySourceDeviceUUIDEvent:(id)a0 error:(id *)a1;
+ (id)requestActivateDevicesEvent;
+ (id)requestActivateDevicesReplyWithEvent:(id)a0 error:(id)a1;
+ (id)errorFromReply:(id)a0;
+ (id)messageTypeFromEvent:(id)a0;

@end
