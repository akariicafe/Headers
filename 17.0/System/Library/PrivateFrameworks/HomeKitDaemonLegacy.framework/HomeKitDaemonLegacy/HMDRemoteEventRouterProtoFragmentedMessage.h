@class NSData;

@interface HMDRemoteEventRouterProtoFragmentedMessage : PBCodable <NSCopying> {
    struct { unsigned char totalFragments : 1; unsigned char totalSize : 1; unsigned char fragmentNumber : 1; unsigned char routerVersion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFragmentData;
@property (retain, nonatomic) NSData *fragmentData;
@property (nonatomic) BOOL hasFragmentNumber;
@property (nonatomic) unsigned int fragmentNumber;
@property (nonatomic) BOOL hasTotalSize;
@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) BOOL hasTotalFragments;
@property (nonatomic) unsigned long long totalFragments;
@property (nonatomic) BOOL hasRouterVersion;
@property (nonatomic) unsigned int routerVersion;

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
