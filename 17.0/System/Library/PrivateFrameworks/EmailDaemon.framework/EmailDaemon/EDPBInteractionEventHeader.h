@class NSString;

@interface EDPBInteractionEventHeader : PBCodable <EDPETMessageFrameTypeIntrospectable, NSCopying> {
    struct { unsigned char deviceId : 1; unsigned char userId : 1; unsigned char timezoneOffset : 1; unsigned char userSegment : 1; unsigned char version : 1; unsigned char categoryRootInstalled : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasUserId;
@property (nonatomic) long long userId;
@property (nonatomic) BOOL hasDeviceId;
@property (nonatomic) long long deviceId;
@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (nonatomic) BOOL hasTimezoneOffset;
@property (nonatomic) int timezoneOffset;
@property (nonatomic) BOOL hasUserSegment;
@property (nonatomic) unsigned int userSegment;
@property (nonatomic) BOOL hasCategoryRootInstalled;
@property (nonatomic) BOOL categoryRootInstalled;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (int)messageFrameType;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
