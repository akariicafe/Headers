@class NSString, NSMutableArray;

@interface CPLFaceInstance : PBCodable <NSCopying> {
    struct { unsigned char bodyCenterX : 1; unsigned char bodyCenterY : 1; unsigned char bodyHeight : 1; unsigned char bodyWidth : 1; unsigned char centerX : 1; unsigned char centerY : 1; unsigned char size : 1; unsigned char detectionType : 1; unsigned char faceState : 1; unsigned char nameSource : 1; } _has;
}

@property (readonly, nonatomic, getter=isNoneState) BOOL noneState;
@property (nonatomic, getter=isKeyFace) BOOL keyFace;
@property (nonatomic, getter=isManual) BOOL manual;
@property (readonly, nonatomic) BOOL hasPersonIdentifier;
@property (retain, nonatomic) NSString *personIdentifier;
@property (nonatomic) BOOL hasCenterX;
@property (nonatomic) double centerX;
@property (nonatomic) BOOL hasCenterY;
@property (nonatomic) double centerY;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) double size;
@property (nonatomic) BOOL hasFaceState;
@property (nonatomic) unsigned int faceState;
@property (retain, nonatomic) NSMutableArray *rejectedPersonIdentifiers;
@property (nonatomic) BOOL hasNameSource;
@property (nonatomic) unsigned int nameSource;
@property (nonatomic) BOOL hasDetectionType;
@property (nonatomic) unsigned int detectionType;
@property (nonatomic) BOOL hasBodyCenterX;
@property (nonatomic) double bodyCenterX;
@property (nonatomic) BOOL hasBodyCenterY;
@property (nonatomic) double bodyCenterY;
@property (nonatomic) BOOL hasBodyWidth;
@property (nonatomic) double bodyWidth;
@property (nonatomic) BOOL hasBodyHeight;
@property (nonatomic) double bodyHeight;

+ (Class)rejectedPersonIdentifiersType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (void)clearState;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isTorsoOnly;
- (id)pointerDescription;
- (void)_setFaceStateBit:(unsigned int)a0 fromBoolValue:(BOOL)a1;
- (BOOL)_isFaceStateBitSet:(unsigned int)a0;
- (void)addRejectedPersonIdentifiers:(id)a0;
- (void)clearRejectedPersonIdentifiers;
- (BOOL)isPetDetectionType;
- (id)rejectedPersonIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)rejectedPersonIdentifiersCount;

@end
