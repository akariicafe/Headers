@class NSNumber, NSString;

@interface MPModelPlaybackPosition : MPModelObject

@property (nonatomic) double bookmarkTime;
@property (nonatomic) BOOL shouldRememberBookmarkTime;
@property (nonatomic) BOOL hasBeenPlayed;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSNumber *stopTime;
@property (copy, nonatomic) NSString *storeUbiquitousIdentifier;
@property (nonatomic) long long userPlayCount;

+ (id)__startTime_KEY;
+ (id)__storeUbiquitousIdentifier_KEY;
+ (void)__MPModelPropertyPlaybackPositionBookmarkTime__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaybackPositionHasBeenPlayed__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaybackPositionShouldRememberBookmarkTime__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaybackPositionStartTime__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaybackPositionStopTime__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaybackPositionStoreUbiquitousIdentifier__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlaybackPositionUserPlayCount__MAPPING_MISSING__;
+ (id)__bookmarkTime_KEY;
+ (id)__hasBeenPlayed_KEY;
+ (id)__shouldRememberBookmarkTime_KEY;
+ (id)__stopTime_KEY;
+ (id)__userPlayCount_KEY;

@end
