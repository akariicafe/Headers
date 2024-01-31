@class NSString, NSMutableArray;

@interface _ICLLRemoveQueueItemCommand : PBCodable <NSCopying> {
    NSString *_itemId;
    NSMutableArray *_itemIdsToRemoves;
    NSString *_queueContext;
    int _removeType;
    int _revision;
    struct { unsigned char removeType : 1; unsigned char revision : 1; } _has;
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
