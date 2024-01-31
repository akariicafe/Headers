@class NSNumber;

@interface STPresetsConfiguration : NSObject

@property (readonly) NSNumber *allowedAppStoreRating;
@property (readonly, getter=isBooksAllowed) BOOL booksAllowed;
@property (readonly) NSNumber *allowedTVRating;
@property (readonly) NSNumber *allowedMovieRating;
@property (readonly, getter=isExplicitMediaAllowed) BOOL explicitMediaAllowed;
@property (readonly, getter=areMusicVideosAllowed) BOOL musicVideosAllowed;
@property (readonly, getter=areMusicProfilesAllowed) BOOL musicProfilesAllowed;
@property (readonly) long long allowedWebContent;
@property (readonly, getter=isSiriWebSearchAllowed) BOOL siriWebSearchAllowed;
@property (readonly, getter=isSiriExplicitAllowed) BOOL siriExplicitAllowed;
@property (readonly, getter=isDeletingAppsAllowed) BOOL deletingAppsAllowed;

@end
