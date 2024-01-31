@class _MPCProtoRadioContentReference, NSString, _MPCProtoDelegateInfo;

@interface _MPCProtoRadioCreationProperties : PBCodable <NSCopying> {
    _MPCProtoDelegateInfo *_accountInfo;
    _MPCProtoRadioContentReference *_nowPlayingContentReference;
    NSString *_playActivityFeatureName;
    NSString *_playActivityQueueGroupingID;
    NSString *_playbackAuthorizationToken;
    NSString *_radioStationID;
    NSString *_radioStationURLString;
    _MPCProtoRadioContentReference *_seedContentReference;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
