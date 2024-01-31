@class NSString, NSData;

@interface PGMusicCacheInfoEntry : NSManagedObject

@property (nonatomic, copy) NSString *version;
@property (nonatomic, copy) NSData *musicBagContentsAsData;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
