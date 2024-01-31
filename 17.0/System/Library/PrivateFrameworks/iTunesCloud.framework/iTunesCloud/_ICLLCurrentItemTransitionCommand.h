@class NSString;

@interface _ICLLCurrentItemTransitionCommand : PBCodable <NSCopying> {
    NSString *_previousItemId;
    NSString *_transitionItemId;
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
