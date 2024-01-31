@class IDSPushToken, NSUUID, NSString, NSData, IDSURI;

@interface IDSGroupSessionActiveParticipant : NSObject {
    IDSURI *_participantURIObject;
    IDSPushToken *_participantPushTokenObject;
    BOOL _givenNSNullToken;
}

@property (readonly, nonatomic) IDSPushToken *participantPushTokenObject;
@property (readonly, nonatomic) NSUUID *groupUUID;
@property (readonly, nonatomic) unsigned long long participantIdentifier;
@property (readonly, nonatomic) BOOL isKnown;
@property (readonly, nonatomic) NSString *participantURI;
@property (readonly, nonatomic) NSData *participantPushToken;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)debugDescription;
- (id)dictionaryRepresentation;
- (id)initWithGroupUUID:(id)a0 participantIdentifier:(unsigned long long)a1 isKnown:(BOOL)a2 participantURI:(id)a3 pushToken:(id)a4;
- (id)initWithGroupUUID:(id)a0 participantIdentifier:(unsigned long long)a1 isKnown:(BOOL)a2 participantURIObject:(id)a3 pushTokenObject:(id)a4;

@end
