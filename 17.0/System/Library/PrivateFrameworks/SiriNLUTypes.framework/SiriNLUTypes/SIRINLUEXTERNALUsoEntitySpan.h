@class SIRINLUEXTERNALMatchInfo, SIRICOMMONStringValue, SIRINLUEXTERNALPayloadAttachmentInfo, NSMutableArray, SIRICOMMONUInt32Value;

@interface SIRINLUEXTERNALUsoEntitySpan : PBCodable <NSCopying> {
    struct { unsigned char nodeIndex : 1; unsigned char sourceComponent : 1; } _has;
}

@property (nonatomic) BOOL hasNodeIndex;
@property (nonatomic) unsigned int nodeIndex;
@property (readonly, nonatomic) BOOL hasOriginAppId;
@property (retain, nonatomic) SIRICOMMONStringValue *originAppId;
@property (nonatomic) BOOL hasSourceComponent;
@property (nonatomic) int sourceComponent;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) SIRICOMMONStringValue *label;
@property (readonly, nonatomic) BOOL hasMatchInfo;
@property (retain, nonatomic) SIRINLUEXTERNALMatchInfo *matchInfo;
@property (retain, nonatomic) NSMutableArray *properties;
@property (readonly, nonatomic) BOOL hasStartIndex;
@property (retain, nonatomic) SIRICOMMONUInt32Value *startIndex;
@property (readonly, nonatomic) BOOL hasEndIndex;
@property (retain, nonatomic) SIRICOMMONUInt32Value *endIndex;
@property (retain, nonatomic) NSMutableArray *alternatives;
@property (readonly, nonatomic) BOOL hasOriginEntityId;
@property (retain, nonatomic) SIRICOMMONStringValue *originEntityId;
@property (readonly, nonatomic) BOOL hasPayloadAttachmentInfo;
@property (retain, nonatomic) SIRINLUEXTERNALPayloadAttachmentInfo *payloadAttachmentInfo;

+ (Class)propertiesType;
+ (Class)alternativesType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearAlternatives;
- (void)mergeFrom:(id)a0;
- (unsigned long long)alternativesCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearProperties;
- (unsigned long long)propertiesCount;
- (void)addAlternatives:(id)a0;
- (void)addProperties:(id)a0;
- (id)alternativesAtIndex:(unsigned long long)a0;
- (id)propertiesAtIndex:(unsigned long long)a0;
- (int)StringAsSourceComponent:(id)a0;
- (id)sourceComponentAsString:(int)a0;

@end
