@class NSString, NSMutableArray;

@interface NNMKProtoVIPSender : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSMutableArray *emailAddresses;

+ (Class)emailAddressesType;
+ (id)protoVIP:(id)a0;

- (void)addEmailAddresses:(id)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)emailAddressesCount;
- (void)writeTo:(id)a0;
- (id)description;
- (void)clearEmailAddresses;
- (id)emailAddressesAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)vipSender;

@end
