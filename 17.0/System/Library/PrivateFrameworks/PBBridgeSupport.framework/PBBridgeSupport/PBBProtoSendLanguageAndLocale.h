@class NSString, NSMutableArray, NSData;

@interface PBBProtoSendLanguageAndLocale : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *appleLanguages;
@property (readonly, nonatomic) BOOL hasAppleLocale;
@property (retain, nonatomic) NSString *appleLocale;
@property (readonly, nonatomic) BOOL hasArchivedPreferences;
@property (retain, nonatomic) NSData *archivedPreferences;

+ (Class)appleLanguagesType;

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
- (void)addAppleLanguages:(id)a0;
- (id)appleLanguagesAtIndex:(unsigned long long)a0;
- (unsigned long long)appleLanguagesCount;
- (void)clearAppleLanguages;

@end
