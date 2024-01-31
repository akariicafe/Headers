@class NSString, MXProcessingError, NSData;

@interface MXSpeechProfileBuildResponse : PBCodable <NSCopying> {
    struct { unsigned char incompleteProfile : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) MXProcessingError *error;
@property (nonatomic) BOOL hasIncompleteProfile;
@property (nonatomic) BOOL incompleteProfile;
@property (readonly, nonatomic) BOOL hasLanguageProfile;
@property (retain, nonatomic) NSData *languageProfile;
@property (readonly, nonatomic) BOOL hasPronunciationCache;
@property (retain, nonatomic) NSData *pronunciationCache;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
