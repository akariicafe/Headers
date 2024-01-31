@class NSString, NSArray, NSURL, NSDate, MPSectionedCollection;

@interface MPModelForYouRecommendationGroup : MPModelObject {
    NSURL *_refreshURL;
}

@property (nonatomic) unsigned long long groupType;
@property (retain, nonatomic) NSDate *lastUpdatedDate;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) MPSectionedCollection *sectionedItems;
@property (nonatomic) long long sectionIndex;
@property (copy, nonatomic) NSArray *subgroups;
@property (copy, nonatomic) NSURL *loadAdditionalContentURL;
@property (copy, nonatomic) NSURL *hrefURL;
@property (copy, nonatomic) NSURL *refreshURL;
@property (nonatomic, getter=isGroupRecommendation) BOOL groupRecommendation;
@property (nonatomic) unsigned long long traits;
@property (nonatomic) BOOL displaysAsGridCellInCarPlay;
@property (nonatomic) BOOL displaysAsTitledSectionWithRowsInCarPlay;

+ (id)__groupType_KEY;
+ (id)__subgroups_KEY;
+ (void)__MPModelForYouRecommendationGroupPropertyDisplaysAsGridCellInCarPlay__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertyDisplaysAsTitledSectionWithRowsInCarPlay__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertyGroupType__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertyHrefURL__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertyLastUpdatedDate__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertyLoadAdditionalContentURL__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertyRefreshURL__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertySectionIndex__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertySectionedItems__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertySubgroups__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertyTitle__MAPPING_MISSING__;
+ (void)__MPModelForYouRecommendationGroupPropertyTraits__MAPPING_MISSING__;
+ (id)__displaysAsGridCellInCarPlay_KEY;
+ (id)__displaysAsTitledSectionWithRowsInCarPlay_KEY;
+ (id)__hrefURL_KEY;
+ (id)__lastUpdatedDate_KEY;
+ (id)__loadAdditionalContentURL_KEY;
+ (id)__refreshURL_KEY;
+ (id)__sectionIndex_KEY;
+ (id)__sectionedItems_KEY;
+ (id)__title_KEY;
+ (id)__traits_KEY;
+ (id)classesForSecureCoding;

- (id)itemAtIndex:(long long)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)refreshURL;
- (void)setRefreshURL:(id)a0;

@end
