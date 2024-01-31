@interface VUIRestrictions : NSObject <VUIRestrictions>

@property (readonly, nonatomic) BOOL allowsShowingUndownloadedTVShows;
@property (readonly, nonatomic) BOOL allowsShowingUndownloadedMovies;

+ (id)sharedInstance;

@end
