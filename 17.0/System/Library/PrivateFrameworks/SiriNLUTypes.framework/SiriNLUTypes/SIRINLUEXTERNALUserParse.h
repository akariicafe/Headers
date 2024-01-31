@class SIRINLUEXTERNALParser, NSString, SIRINLUEXTERNALCorrectionOutcome, SIRINLUEXTERNALUUID, NSMutableArray, SIRINLUEXTERNALRepetitionResult;

@interface SIRINLUEXTERNALUserParse : PBCodable <NSCopying> {
    struct { unsigned char comparableProbability : 1; unsigned char probability : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdA;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *idA;
@property (retain, nonatomic) NSMutableArray *userDialogActs;
@property (nonatomic) BOOL hasProbability;
@property (nonatomic) double probability;
@property (readonly, nonatomic) BOOL hasParserId;
@property (retain, nonatomic) NSString *parserId;
@property (readonly, nonatomic) BOOL hasRepetitionResult;
@property (retain, nonatomic) SIRINLUEXTERNALRepetitionResult *repetitionResult;
@property (readonly, nonatomic) BOOL hasParser;
@property (retain, nonatomic) SIRINLUEXTERNALParser *parser;
@property (nonatomic) BOOL hasComparableProbability;
@property (nonatomic) double comparableProbability;
@property (readonly, nonatomic) BOOL hasCorrectionOutcome;
@property (retain, nonatomic) SIRINLUEXTERNALCorrectionOutcome *correctionOutcome;

+ (Class)userDialogActsType;

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
- (void)addUserDialogActs:(id)a0;
- (void)clearUserDialogActs;
- (id)userDialogActsAtIndex:(unsigned long long)a0;
- (unsigned long long)userDialogActsCount;

@end
