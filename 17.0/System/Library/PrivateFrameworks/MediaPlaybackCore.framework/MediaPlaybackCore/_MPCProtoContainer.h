@class _MPCProtoContainerIdentifierSet, NSMutableArray, NSString;

@interface _MPCProtoContainer : PBCodable <NSCopying> {
    int _containerType;
    _MPCProtoContainerIdentifierSet *_identifierSet;
    NSMutableArray *_items;
    NSString *_playActivityFeatureName;
    NSString *_playActivityQueueGroupingID;
    struct { unsigned char containerType : 1; } _has;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
