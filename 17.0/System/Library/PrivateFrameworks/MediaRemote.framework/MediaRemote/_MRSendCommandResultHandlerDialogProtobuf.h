@class NSString, NSMutableArray;

@interface _MRSendCommandResultHandlerDialogProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *actions;
@property (readonly, nonatomic) BOOL hasLocalizedTitle;
@property (retain, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL hasLocalizedMessage;
@property (retain, nonatomic) NSString *localizedMessage;

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
