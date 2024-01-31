@class NSString, ManagedPlaylist;

@interface ManagedPlaylistItem : NSManagedObject

@property (nonatomic) double duration;
@property (nonatomic) long long healthKitActivityType;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) int index;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, retain) ManagedPlaylist *playlist;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
