@class NSString, NSMutableArray;

@interface AWDMMCSError : PBCodable <NSCopying> {
    struct { unsigned char code : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) BOOL hasCode;
@property (nonatomic) int code;
@property (retain, nonatomic) NSMutableArray *underlyingErrors;

+ (Class)underlyingErrorsType;

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
- (void)addUnderlyingErrors:(id)a0;
- (void)clearUnderlyingErrors;
- (id)underlyingErrorsAtIndex:(unsigned long long)a0;
- (unsigned long long)underlyingErrorsCount;

@end
