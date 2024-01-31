@class NSMutableArray;

@interface NSSLegalDocumentsReqMsg : PBCodable <NSCopying> {
    struct { unsigned char addUrlToSAR : 1; unsigned char fetchBuiltinApps : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *legacyPreferredLanguages;
@property (retain, nonatomic) NSMutableArray *preferredLanguages;
@property (nonatomic) BOOL hasAddUrlToSAR;
@property (nonatomic) BOOL addUrlToSAR;
@property (nonatomic) BOOL hasFetchBuiltinApps;
@property (nonatomic) BOOL fetchBuiltinApps;

+ (Class)legacyPreferredLanguagesType;
+ (Class)preferredLanguagesType;

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
- (void)addPreferredLanguages:(id)a0;
- (void)clearPreferredLanguages;
- (id)preferredLanguagesAtIndex:(unsigned long long)a0;
- (unsigned long long)preferredLanguagesCount;
- (void)addLegacyPreferredLanguages:(id)a0;
- (void)clearLegacyPreferredLanguages;
- (id)legacyPreferredLanguagesAtIndex:(unsigned long long)a0;
- (unsigned long long)legacyPreferredLanguagesCount;

@end
