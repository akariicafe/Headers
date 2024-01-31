@class NSString, NSMutableArray;

@interface PBBProtoWarrantySentinel : PBCodable <NSCopying> {
    struct { unsigned char removeSentinel : 1; unsigned char sentinelExists : 1; } _has;
}

@property (nonatomic) BOOL hasSentinelExists;
@property (nonatomic) BOOL sentinelExists;
@property (nonatomic) BOOL hasRemoveSentinel;
@property (nonatomic) BOOL removeSentinel;
@property (retain, nonatomic) NSMutableArray *appleLanguages;
@property (readonly, nonatomic) BOOL hasAppleLocale;
@property (retain, nonatomic) NSString *appleLocale;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;

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
