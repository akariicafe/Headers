@class SIRICOMMONFloatValue, SIRICOMMONUInt32Value;

@interface SIRINLUEXTERNALMatchInfo : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _matchedAliasTypes;
    struct { unsigned char matchSignalBitset : 1; } _has;
}

@property (nonatomic) BOOL hasMatchSignalBitset;
@property (nonatomic) unsigned int matchSignalBitset;
@property (readonly, nonatomic) BOOL hasMatchScore;
@property (retain, nonatomic) SIRICOMMONFloatValue *matchScore;
@property (readonly, nonatomic) BOOL hasMaxTokenCount;
@property (retain, nonatomic) SIRICOMMONUInt32Value *maxTokenCount;
@property (readonly, nonatomic) BOOL hasMatchedTokenCount;
@property (retain, nonatomic) SIRICOMMONUInt32Value *matchedTokenCount;
@property (readonly, nonatomic) BOOL hasMaxStopWordCount;
@property (retain, nonatomic) SIRICOMMONUInt32Value *maxStopWordCount;
@property (readonly, nonatomic) BOOL hasMatchedStopWordCount;
@property (retain, nonatomic) SIRICOMMONUInt32Value *matchedStopWordCount;
@property (readonly, nonatomic) BOOL hasEditDistance;
@property (retain, nonatomic) SIRICOMMONUInt32Value *editDistance;
@property (readonly, nonatomic) BOOL hasMaxAliasCount;
@property (retain, nonatomic) SIRICOMMONUInt32Value *maxAliasCount;
@property (readonly, nonatomic) BOOL hasMatchedAliasCount;
@property (retain, nonatomic) SIRICOMMONUInt32Value *matchedAliasCount;
@property (readonly, nonatomic) unsigned long long matchedAliasTypesCount;
@property (readonly, nonatomic) int *matchedAliasTypes;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addMatchedAliasTypes:(int)a0;
- (void)clearMatchedAliasTypes;
- (int)matchedAliasTypesAtIndex:(unsigned long long)a0;
- (int)StringAsMatchedAliasTypes:(id)a0;
- (id)matchedAliasTypesAsString:(int)a0;
- (void)setMatchedAliasTypes:(int *)a0 count:(unsigned long long)a1;

@end
