@class PersonLinkingPerson, NSString;

@interface PersonLinkingPersonPair : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char grade : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSourcePerson;
@property (retain, nonatomic) PersonLinkingPerson *sourcePerson;
@property (readonly, nonatomic) BOOL hasTargetPerson;
@property (retain, nonatomic) PersonLinkingPerson *targetPerson;
@property (nonatomic) BOOL hasGrade;
@property (nonatomic) BOOL grade;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) float confidence;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *reason;

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
