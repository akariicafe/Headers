@class NSString, MPModelTVShow, NSDate, MPModelTVEpisode;

@interface MPModelTVSeason : MPModelObject

@property (nonatomic) long long number;
@property (copy, nonatomic) NSString *descriptionText;
@property (nonatomic) long long year;
@property (nonatomic) long long episodesCount;
@property (nonatomic) BOOL hasCleanContent;
@property (nonatomic) BOOL hasExplicitContent;
@property (copy, nonatomic) NSDate *libraryAddedDate;
@property (nonatomic, getter=isLibraryAdded) BOOL libraryAdded;
@property (nonatomic, getter=isLibraryAddEligible) BOOL libraryAddEligible;
@property (nonatomic) long long sortType;
@property (retain, nonatomic) MPModelTVShow *show;
@property (retain, nonatomic) MPModelTVEpisode *representativeEpisode;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (readonly, copy, nonatomic) NSDate *downloadedDate;

+ (id)__descriptionText_KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)kindWithEpisodeKind:(id)a0;
+ (id)__show_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (long long)genericObjectType;
+ (void)__MPModelPropertyTVSeasonArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonDescriptionText__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonDownloadedDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonEpisodesCount__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonHasCleanContent__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonHasExplicitContent__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonLibraryAddEligible__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonLibraryAddedDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonLibraryAdded__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonNumber__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonSortType__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVSeasonYear__MAPPING_MISSING__;
+ (void)__MPModelRelationshipTVSeasonRepresentativeEpisode__MAPPING_MISSING__;
+ (void)__MPModelRelationshipTVSeasonShow__MAPPING_MISSING__;
+ (id)__downloadedDate_KEY;
+ (id)__episodesCount_KEY;
+ (id)__hasCleanContent_KEY;
+ (id)__hasExplicitContent_KEY;
+ (id)__libraryAddEligible_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__libraryAdded_KEY;
+ (id)__number_KEY;
+ (id)__representativeEpisode_KEY;
+ (id)__sortType_KEY;
+ (id)__year_KEY;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (BOOL)supportsLibraryAddStatusObservation;

- (id)humanDescription;
- (id)artworkCatalog;
- (struct MPLibraryAddStatusObserverConfiguration { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })libraryAddStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)a0;
- (id)personalizationScopedPropertiesForProperties:(id)a0;
- (id)relativeModelObjectForStoreLibraryPersonalization;

@end
