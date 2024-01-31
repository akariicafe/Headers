@class NSString, NSMutableArray;

@interface VisionSignalGradingVisionGrade : PBCodable <NSCopying> {
    struct { unsigned char childAge : 1; unsigned char numPeople : 1; unsigned char cameraRollGrade : 1; unsigned char childGrade : 1; unsigned char extractedGrade : 1; unsigned char imageGrade : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasImageGrade;
@property (nonatomic) BOOL imageGrade;
@property (nonatomic) BOOL hasNumPeople;
@property (nonatomic) int numPeople;
@property (nonatomic) BOOL hasCameraRollGrade;
@property (nonatomic) BOOL cameraRollGrade;
@property (retain, nonatomic) NSMutableArray *extractedSignals;
@property (nonatomic) BOOL hasExtractedGrade;
@property (nonatomic) BOOL extractedGrade;
@property (nonatomic) BOOL hasChildGrade;
@property (nonatomic) BOOL childGrade;
@property (nonatomic) BOOL hasChildAge;
@property (nonatomic) int childAge;

+ (Class)extractedSignalsType;

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
- (void)addExtractedSignals:(id)a0;
- (void)clearExtractedSignals;
- (id)extractedSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)extractedSignalsCount;

@end
