@class NSMutableArray;

@interface NPKProtoAddPendingProvisioningRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *pendingProvisionings;

+ (Class)pendingProvisioningType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addPendingProvisioning:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearPendingProvisionings;
- (id)pendingProvisioningAtIndex:(unsigned long long)a0;
- (unsigned long long)pendingProvisioningsCount;

@end
