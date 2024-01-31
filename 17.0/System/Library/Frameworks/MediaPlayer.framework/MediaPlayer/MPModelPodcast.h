@class NSString, NSURL, MPModelPodcastAuthor;

@interface MPModelPodcast : MPModelObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *feedURL;
@property (copy, nonatomic) NSURL *shareURL;
@property (nonatomic) BOOL supportsSubscription;
@property (retain, nonatomic) MPModelPodcastAuthor *author;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (readonly, nonatomic) long long sortType;

+ (id)kindWithEpisodeKind:(id)a0;
+ (id)__artworkCatalogBlock_KEY;
+ (long long)genericObjectType;
+ (void)__MPModelPropertyPodcastSupportsSubscription__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastFeedURL__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastShareURL__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastSortType__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastTitle__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPodcastAuthor__MAPPING_MISSING__;
+ (id)__author_KEY;
+ (id)__feedURL_KEY;
+ (id)__shareURL_KEY;
+ (id)__sortType_KEY;
+ (id)__supportsSubscription_KEY;
+ (id)__title_KEY;

- (id)humanDescription;
- (id)artworkCatalog;

@end
