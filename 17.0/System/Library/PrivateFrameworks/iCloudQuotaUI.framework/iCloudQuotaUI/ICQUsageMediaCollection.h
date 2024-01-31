@class NSMutableArray;

@interface ICQUsageMediaCollection : NSObject

@property (nonatomic, getter=isGrouped) BOOL grouped;
@property (copy, nonatomic) NSMutableArray *items;
@property (copy, nonatomic) NSMutableArray *itemSizes;
@property (nonatomic) float totalSize;

- (void).cxx_destruct;
- (void)removeItemAtIndex:(unsigned long long)a0;
- (void)sortItemsByMediaKey:(id)a0;

@end
