@class NSData, NPKProtoPass, NSMutableArray;

@interface NPKProtoRemotePassUpdateResponse : PBCodable <NSCopying> {
    struct { unsigned char upgradeStatus : 1; unsigned char pending : 1; } _has;
}

@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending;
@property (readonly, nonatomic) BOOL hasPass;
@property (retain, nonatomic) NPKProtoPass *pass;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;
@property (nonatomic) BOOL hasUpgradeStatus;
@property (nonatomic) int upgradeStatus;
@property (retain, nonatomic) NSMutableArray *expressPassInformations;

+ (Class)expressPassInformationType;

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
- (int)StringAsUpgradeStatus:(id)a0;
- (void)addExpressPassInformation:(id)a0;
- (void)clearExpressPassInformations;
- (id)expressPassInformationAtIndex:(unsigned long long)a0;
- (unsigned long long)expressPassInformationsCount;
- (id)upgradeStatusAsString:(int)a0;

@end
