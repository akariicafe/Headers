@class NSArray;

@interface PUStorageTipCollectionViewDataSection : PXDataSection

@property (readonly, nonatomic) NSArray *allItems;
@property (readonly, nonatomic) long long totalStorageSize;

- (id)objectAtIndex:(long long)a0;
- (long long)count;
- (void).cxx_destruct;
- (id)initWithOutlineObject:(id)a0;
- (id)initWithSizesDictionary:(id)a0 countsDictionary:(id)a1;
- (id)initWithZerosWithStorageTipCount:(long long)a0;

@end
