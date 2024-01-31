@class NSString, NSMutableArray;

@interface MIPMultiverseIdentifier : PBCodable <NSCopying> {
    struct { unsigned char accountId : 1; unsigned char purchaseHistoryId : 1; unsigned char sagaId : 1; unsigned char storeId : 1; unsigned char mediaObjectType : 1; unsigned char mediaType : 1; } _has;
}

@property (nonatomic) BOOL hasMediaObjectType;
@property (nonatomic) int mediaObjectType;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) int mediaType;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasAccountId;
@property (nonatomic) long long accountId;
@property (nonatomic) BOOL hasStoreId;
@property (nonatomic) long long storeId;
@property (nonatomic) BOOL hasSagaId;
@property (nonatomic) long long sagaId;
@property (nonatomic) BOOL hasPurchaseHistoryId;
@property (nonatomic) long long purchaseHistoryId;
@property (readonly, nonatomic) BOOL hasCloudUniversalLibraryId;
@property (retain, nonatomic) NSString *cloudUniversalLibraryId;
@property (readonly, nonatomic) BOOL hasCloudLibraryId;
@property (retain, nonatomic) NSString *cloudLibraryId;
@property (retain, nonatomic) NSMutableArray *libraryIdentifiers;

+ (Class)libraryIdentifiersType;

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
- (int)StringAsMediaType:(id)a0;
- (id)mediaTypeAsString:(int)a0;
- (void)clearLibraryIdentifiers;
- (unsigned long long)libraryIdentifiersCount;
- (int)StringAsMediaObjectType:(id)a0;
- (void)addLibraryIdentifiers:(id)a0;
- (id)libraryIdentifiersAtIndex:(unsigned long long)a0;
- (id)mediaObjectTypeAsString:(int)a0;

@end
