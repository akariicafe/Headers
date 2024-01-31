@class NSMutableOrderedSet;

@interface NMSMediaDownloadInfo : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *items;
@property (nonatomic) unsigned long long totalItemSize;

- (id)initWithItems:(id)a0;
- (BOOL)containsItem:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)totalItemCount;
- (void)enumerateMediaItemsUsingBlock:(id /* block */)a0;
- (id)externalLibraryItemIdentifiers;
- (id)mediaLibraryItemIdentifiers;

@end
