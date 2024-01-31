@interface _CDXPCContextCodecs : _CDXPCCodecs

+ (id)keyPathsFromFetchPropertiesEvent:(id)a0 error:(id *)a1;
+ (id)subscribeToContextValueNotificationsReplyWithEvent:(id)a0 error:(id)a1;
+ (id)unsubscribeFromContextValueNotificationsEventWithRegistration:(id)a0 deviceIDs:(id)a1 error:(id *)a2;
+ (id)supportedClassesToUnarchive;
+ (id)subscribeToContextValueNotificationsEventWithRegistration:(id)a0 deviceIDs:(id)a1 error:(id *)a2;
+ (BOOL)addKeyPaths:(id)a0 toDictionary:(id)a1 error:(id *)a2;
+ (BOOL)addRegistration:(id)a0 toDictionary:(id)a1 error:(id *)a2;
+ (BOOL)parseUnsubscribeFromContextValueNotificationsEvent:(id)a0 registration:(id *)a1 deviceIDs:(id *)a2 error:(id *)a3;
+ (id)fetchPropertiesEventWithRemoteKeyPaths:(id)a0 error:(id *)a1;
+ (BOOL)parseSubscribeToContextValueNotificationsEvent:(id)a0 registration:(id *)a1 deviceIDs:(id *)a2 error:(id *)a3;
+ (id)commonContextValueNotificationsEventWithType:(const char *)a0 registration:(id)a1 deviceIDs:(id)a2 error:(id *)a3;
+ (id)registrationFromDictionary:(id)a0 error:(id *)a1;
+ (id)keyPathsFromDictionary:(id)a0 error:(id *)a1;
+ (id)unsubscribeFromContextValueNotificationsReplyWithEvent:(id)a0 error:(id)a1;

@end
