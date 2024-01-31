@class NSArray, NSString, IDSMPConversationGroup, IDSDeviceIdentity;

@interface IDSConversationGroupCypher : NSObject <ENCypher>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IDSMPConversationGroup *conversationGroup;
@property (retain, nonatomic) NSArray *participants;
@property (readonly, nonatomic) IDSDeviceIdentity *deviceIdentity;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_memberList;
- (id)cypherData:(id)a0 withAccountIdentity:(id)a1 identifier:(id *)a2 error:(id *)a3;
- (id)decypherData:(id)a0 withAccountIdentity:(id)a1 signingDevicePublicKey:(id)a2 identifier:(id)a3 error:(id *)a4;
- (id)initWithConversationGroup:(id)a0 deviceIdentity:(id)a1 participants:(id)a2;

@end
