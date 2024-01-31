@class NSString, MIPArtist, NSMutableArray;

@interface MIPAlbum : PBCodable <NSCopying> {
    struct { unsigned char likedStateChangedDate : 1; unsigned char persistentId : 1; unsigned char storeId : 1; unsigned char likedState : 1; unsigned char numDiscs : 1; unsigned char numTracks : 1; unsigned char userRating : 1; unsigned char compilation : 1; } _has;
}

@property (nonatomic) BOOL hasStoreId;
@property (nonatomic) long long storeId;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasSortName;
@property (retain, nonatomic) NSString *sortName;
@property (readonly, nonatomic) BOOL hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (nonatomic) BOOL hasNumTracks;
@property (nonatomic) int numTracks;
@property (nonatomic) BOOL hasNumDiscs;
@property (nonatomic) int numDiscs;
@property (readonly, nonatomic) BOOL hasArtworkId;
@property (retain, nonatomic) NSString *artworkId;
@property (nonatomic) BOOL hasUserRating;
@property (nonatomic) int userRating;
@property (nonatomic) BOOL hasCompilation;
@property (nonatomic) BOOL compilation;
@property (nonatomic) BOOL hasPersistentId;
@property (nonatomic) long long persistentId;
@property (readonly, nonatomic) BOOL hasCloudId;
@property (retain, nonatomic) NSString *cloudId;
@property (nonatomic) BOOL hasLikedState;
@property (nonatomic) int likedState;
@property (nonatomic) BOOL hasLikedStateChangedDate;
@property (nonatomic) long long likedStateChangedDate;
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
- (void)clearLibraryIdentifiers;
- (unsigned long long)libraryIdentifiersCount;
- (void)addLibraryIdentifiers:(id)a0;
- (id)libraryIdentifiersAtIndex:(unsigned long long)a0;

@end
