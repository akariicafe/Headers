@class NSString, MXSpeechProfileSourceData, NSData;

@interface MXSpeechProfileBuildRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (readonly, nonatomic) BOOL hasSourceData;
@property (retain, nonatomic) MXSpeechProfileSourceData *sourceData;
@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) BOOL hasPhoneSetVersion;
@property (retain, nonatomic) NSString *phoneSetVersion;
@property (readonly, nonatomic) BOOL hasExistingLanguageProfile;
@property (retain, nonatomic) NSData *existingLanguageProfile;
@property (readonly, nonatomic) BOOL hasExistingPronunciationCache;
@property (retain, nonatomic) NSData *existingPronunciationCache;

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
