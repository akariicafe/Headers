@class _PASLock;

@interface _CDContactFavoritesUtilities : NSObject

@property (retain, nonatomic) _PASLock *contactFavorites;

+ (id)sharedInstance;

- (id)init;
- (id)entriesForContact:(id)a0;
- (void).cxx_destruct;
- (id)favoriteContactEntries;

@end
