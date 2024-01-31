@class HDIDSMessageCenter, NSString, HDIDSParticipant, NSData, PBCodable, HDIDSOutgoingResponse;

@interface HDIDSIncomingRequest : NSObject <HDNanoSyncDescription> {
    id _pbRequest;
    BOOL _expectsResponse;
    unsigned short _messageID;
    HDIDSParticipant *_fromParticipant;
    NSString *_idsIdentifier;
    NSData *_data;
    unsigned long long _priority;
    HDIDSOutgoingResponse *_response;
    HDIDSMessageCenter *_messageCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PBCodable *pbRequest;
@property (readonly, nonatomic) HDIDSParticipant *fromParticipant;
@property (readonly, nonatomic) unsigned short messageID;
@property (readonly, copy, nonatomic) NSString *idsIdentifier;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) BOOL expectsResponse;
@property (readonly, nonatomic) HDIDSOutgoingResponse *response;

@end
