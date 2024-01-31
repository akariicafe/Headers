@class NSString, NSMutableArray;

@interface SIRINLUINTERNALToken : PBCodable <NSCopying> {
    struct { unsigned char begin : 1; unsigned char end : 1; unsigned char nonWhitespaceTokenIndex : 1; unsigned char tokenIndex : 1; unsigned char isSignificant : 1; unsigned char isWhitespace : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) BOOL hasBegin;
@property (nonatomic) int begin;
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) int end;
@property (nonatomic) BOOL hasIsSignificant;
@property (nonatomic) BOOL isSignificant;
@property (nonatomic) BOOL hasIsWhitespace;
@property (nonatomic) BOOL isWhitespace;
@property (retain, nonatomic) NSMutableArray *cleanValues;
@property (nonatomic) BOOL hasTokenIndex;
@property (nonatomic) int tokenIndex;
@property (nonatomic) BOOL hasNonWhitespaceTokenIndex;
@property (nonatomic) int nonWhitespaceTokenIndex;
@property (readonly, nonatomic) BOOL hasCleanValue;
@property (retain, nonatomic) NSString *cleanValue;
@property (retain, nonatomic) NSMutableArray *normalizedValues;

+ (Class)cleanValuesType;
+ (Class)normalizedValuesType;

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
- (void)addNormalizedValues:(id)a0;
- (void)clearNormalizedValues;
- (id)normalizedValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)normalizedValuesCount;
- (void)addCleanValues:(id)a0;
- (id)cleanValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)cleanValuesCount;
- (void)clearCleanValues;

@end
