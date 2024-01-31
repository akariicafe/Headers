@class NSString, NSMutableArray, NSData;

@interface HMPBActionSet : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *actions;
@property (readonly, nonatomic) BOOL hasActionSetType;
@property (retain, nonatomic) NSString *actionSetType;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (readonly, nonatomic) BOOL hasHomeUUID;
@property (retain, nonatomic) NSData *homeUUID;

+ (Class)actionsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)clearActions;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addActions:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)actionsCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)actionsAtIndex:(unsigned long long)a0;

@end
