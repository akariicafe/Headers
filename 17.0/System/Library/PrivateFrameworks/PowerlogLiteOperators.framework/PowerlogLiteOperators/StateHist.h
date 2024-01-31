@class NSMutableArray;

@interface StateHist : PBCodable <NSCopying> {
    struct { unsigned char state : 1; } _has;
}

@property (nonatomic) BOOL hasState;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) NSMutableArray *bins;

+ (Class)binType;

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
- (void)addBin:(id)a0;
- (id)binAtIndex:(unsigned long long)a0;
- (unsigned long long)binsCount;
- (void)clearBins;

@end
