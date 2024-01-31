@class NSString;

@interface AWDIDSRegistrationPhoneNumberValidationFinished : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char numberOfSMSSent : 1; unsigned char registrationError : 1; unsigned char validationDuration : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasRegistrationError;
@property (nonatomic) int registrationError;
@property (nonatomic) BOOL hasValidationDuration;
@property (nonatomic) unsigned int validationDuration;
@property (nonatomic) BOOL hasNumberOfSMSSent;
@property (nonatomic) unsigned int numberOfSMSSent;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
