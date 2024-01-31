@class NSString;

@interface _ICLLReactionCommand : PBCodable <NSCopying> {
    NSString *_itemId;
    NSString *_reaction;
    NSString *_reactionId;
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
