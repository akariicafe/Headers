@class NSUUID, NSString;

@interface HMMediaSystemBuilderPayload : HMFObject <HMMessageEncoding>

@property (readonly, copy) NSUUID *uuid;
@property (readonly, copy) NSUUID *leftComponentUUID;
@property (readonly, copy) NSUUID *rightComponentUUID;
@property (readonly, copy) NSUUID *leftAccessoryUUID;
@property (readonly, copy) NSUUID *rightAccessoryUUID;
@property (readonly, copy) NSUUID *sessionID;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *configuredName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)decodeComponentData:(id)a0 leftComponentUUID:(id *)a1 leftAccessoryUUID:(id *)a2 rightComponentUUID:(id *)a3 rightAccessoryUUID:(id *)a4;
+ (id)encodeComponentDataWithLeftComponentUUID:(id)a0 leftAccessoryUUID:(id)a1 rightComponentUUID:(id)a2 rightAccessoryUUID:(id)a3;

- (id)initWithPayload:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithUUID:(id)a0 name:(id)a1 configuredName:(id)a2 leftComponentUUID:(id)a3 rightComponentUUID:(id)a4 leftAccessoryUUID:(id)a5 rightAccessoryUUID:(id)a6 sessionID:(id)a7;
- (id)payloadCopy;

@end
