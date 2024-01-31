@class TUHandle, NSString, TUConversationParticipantAssociation, TUConversationParticipantCapabilities;

@interface TUMutableConversationParticipant : TUConversationParticipant

@property (nonatomic) unsigned long long identifier;
@property (copy, nonatomic) TUHandle *handle;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic, getter=isScreenEnabled) BOOL screenEnabled;
@property (nonatomic) unsigned long long audioVideoMode;
@property (nonatomic) long long streamToken;
@property (nonatomic) long long screenToken;
@property (nonatomic) long long captionsToken;
@property (nonatomic) long long audioPriority;
@property (nonatomic) long long videoPriority;
@property (copy, nonatomic) NSString *avcIdentifier;
@property (copy, nonatomic) NSString *activeIDSDestination;
@property (copy, nonatomic) TUConversationParticipantCapabilities *capabilities;
@property (nonatomic, getter=isLightweight) BOOL lightweight;
@property (copy, nonatomic) TUConversationParticipantAssociation *association;
@property (nonatomic, getter=isGuestModeEnabled) BOOL guestModeEnabled;
@property (nonatomic, getter=isSpatialPersonaEnabled) BOOL spatialPersonaEnabled;
@property (nonatomic, getter=isCameraMixedWithScreen) BOOL cameraMixedWithScreen;


@end
