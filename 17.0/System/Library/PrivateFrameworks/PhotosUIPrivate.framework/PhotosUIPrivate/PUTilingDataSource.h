@class NSString, NSHashTable;

@interface PUTilingDataSource : NSObject

@property (readonly, nonatomic) NSHashTable *_changeObservers;
@property (retain, nonatomic) NSString *identifier;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)numberOfSubItemsAtIndexPath:(id)a0;
- (void)enumerateIndexPathsStartingAtIndexPath:(id)a0 reverseDirection:(BOOL)a1 usingBlock:(id /* block */)a2;

@end
