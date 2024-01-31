@class NSDictionary, NSString, NSUUID;

@interface CPParticipant : NSObject <NSSecureCoding, NSCopying> {
    unsigned char _localStatus;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long spatialAudioSourceID;
@property (readonly, nonatomic) unsigned char localStatus;
@property (readonly, copy, nonatomic) NSDictionary *avcStreams;
@property (readonly, nonatomic) long long audioToken;
@property (nonatomic, setter=_setSpatialAudioSourceIdentifier:) unsigned long long spatialAudioSourceIdentifier;
@property (nonatomic, setter=_setParticipantIdentifier:) unsigned long long participantIdentifier;
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic, getter=isScreenEnabled) BOOL screenEnabled;
@property (nonatomic) long long streamToken;
@property (nonatomic) long long screenToken;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) unsigned long long participantID;
@property (copy, nonatomic) NSDictionary *userContext;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithAccountIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isLocal;
- (BOOL)_isNearby;
- (id)initWithUUID:(id)a0 accountIdentifier:(id)a1;
- (void)_setAudioToken:(long long)a0;
- (void)_setAVCStreams:(id)a0;
- (BOOL)_isSpectator;
- (id)_localStatusDescription;
- (void)_setLocalStatus:(unsigned char)a0;
- (void)_setParticipantID:(long long)a0;
- (void)_setSpatialAudioSourceId:(unsigned long long)a0;
- (BOOL)isEquivalentToParticipant:(id)a0;

@end
