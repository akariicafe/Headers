@class NSString;

@interface MIPLibraryIdentifier : PBCodable <NSCopying> {
    struct { unsigned char libraryId : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLibraryName;
@property (retain, nonatomic) NSString *libraryName;
@property (nonatomic) BOOL hasLibraryId;
@property (nonatomic) long long libraryId;

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
