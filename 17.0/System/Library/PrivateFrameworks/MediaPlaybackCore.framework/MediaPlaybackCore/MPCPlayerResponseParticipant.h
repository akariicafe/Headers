@class MPCPlayerResponse, NSString, MPModelSharedListeningParticipant;

@interface MPCPlayerResponseParticipant : NSObject <NSObject>

@property (readonly, weak, nonatomic) MPCPlayerResponse *response;
@property (readonly, nonatomic) MPModelSharedListeningParticipant *modelObject;
@property (readonly, nonatomic) long long identifierType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *contentItemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
