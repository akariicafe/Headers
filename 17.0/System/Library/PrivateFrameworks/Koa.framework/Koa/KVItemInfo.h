@class NSString, KVItem, KVPriorInfo;

@interface KVItemInfo : NSObject <NSCopying> {
    KVItem *_item;
    NSString *_originAppId;
    KVPriorInfo *_priorInfo;
}

- (long long)itemType;
- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)item;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)originAppId;
- (id)itemId;
- (id)priorInfo;
- (id)unindexedFields;
- (id)initWithItem:(id)a0 originAppId:(id)a1;
- (id)initWithItem:(id)a0 originAppId:(id)a1 priorInfo:(id)a2;
- (BOOL)isEqualToItemInfo:(id)a0;
- (void)setPriorInfo:(id)a0;
- (id)unindexedFieldsWithType:(long long)a0;

@end
