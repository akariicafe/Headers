@class NSString, NSMutableArray;

@interface FTCPPETInteraction : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *participants;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSString *mechanism;
@property (nonatomic) BOOL isInbound;
@property (retain, nonatomic) NSString *duration;

+ (Class)participantsType;

- (unsigned long long)hash;
- (void)addParticipants:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)participantsCount;
- (id)description;
- (void)clearParticipants;
- (void).cxx_destruct;
- (id)participantsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
