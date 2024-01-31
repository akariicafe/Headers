@class NSUUID;
@protocol TabCollectionItem;

@interface TabContextMenuIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *tabUUID;
@property (readonly, weak, nonatomic) id<TabCollectionItem> sourceItem;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTabUUID:(id)a0 sourceItem:(id)a1;

@end
