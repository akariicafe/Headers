@class NSString, NSMutableArray;

@interface ICIAMApplicationMessageSyncResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSMutableArray *syncCommands;

+ (Class)syncCommandsType;

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
- (void)addSyncCommands:(id)a0;
- (void)clearSyncCommands;
- (id)syncCommandsAtIndex:(unsigned long long)a0;
- (unsigned long long)syncCommandsCount;

@end
