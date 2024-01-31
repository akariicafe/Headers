@class NSString, NSDate;

@interface MPModelRadioStationEvent : MPModelObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSDate *startTime;
@property (copy, nonatomic) NSDate *endTime;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) id /* block */ heroArtworkCatalogBlock;

+ (id)__descriptionText_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (long long)genericObjectType;
+ (id)__startTime_KEY;
+ (void)__MPModelPropertyRadioStationEventArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationEventDescriptionText__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationEventEndTime__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationEventHeroArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationEventStartTime__MAPPING_MISSING__;
+ (void)__MPModelPropertyRadioStationEventTitle__MAPPING_MISSING__;
+ (id)__endTime_KEY;
+ (id)__heroArtworkCatalogBlock_KEY;
+ (id)__title_KEY;

- (id)artworkCatalog;
- (id)heroArtworkCatalog;

@end
