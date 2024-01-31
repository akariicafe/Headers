@class ICUserIdentity, NSArray, MPModelStoreBrowseSectionBuilder, MPStoreItemMetadataResponse, NSDictionary, MPSectionedCollection, NSSet, MPChangeDetails, MPModelStoreBrowseContentItemBuilder;

@interface MPModelStoreBrowseResponseParser : NSObject {
    MPSectionedCollection *_additionalContentIdentifiers;
    NSArray *_allAdditionalContentIdentifiersNeedingLookup;
    long long _parseOnceToken;
    MPSectionedCollection *_results;
    NSDictionary *_storePlatformDataResults;
    NSSet *_unavailableContentIdentifiers;
    ICUserIdentity *_userIdentity;
}

@property (readonly, nonatomic) id rawResponseOutput;
@property (readonly, nonatomic) struct { BOOL useCarPlayBrowseTopLevelContentOnly; BOOL useCarPlayBrowseTopLevelRequestReorderingHeuristics; } options;
@property (readonly, nonatomic) MPModelStoreBrowseResponseParser *previousParser;
@property (readonly, nonatomic) MPStoreItemMetadataResponse *additionalStoreItemMetadataResponse;
@property (readonly, nonatomic) MPModelStoreBrowseSectionBuilder *sectionBuilder;
@property (readonly, nonatomic) MPModelStoreBrowseContentItemBuilder *contentItemBuilder;
@property (readonly, nonatomic) MPSectionedCollection *results;
@property (readonly, nonatomic) MPChangeDetails *changeDetails;
@property (readonly, nonatomic) MPSectionedCollection *additionalContentIdentifiers;
@property (readonly, nonatomic) NSArray *allAdditionalContentIdentifiersNeedingLookup;

- (void).cxx_destruct;
- (void)_parse;
- (BOOL)_parseFeaturedContentChild:(id)a0 isMemberOfChartSet:(BOOL)a1 insertingResultsToSectionedCollection:(id)a2 atSectionIndex:(long long)a3 additionalContentIdentifiers:(id)a4 allAdditionalContentIdentifiersNeedingLookup:(id)a5;
- (void)_parseFeaturedContentStructureModelChildren:(id)a0;
- (void)_parseSingleContentListFromPageDataDictionary:(id)a0 isMemberOfChartSet:(BOOL)a1;
- (void)_parseUsingAdditionalContentIdentifiersFromPreviousParser;
- (void)_populateStorePlatformDataResultsFromRawResponseOutputDictionary:(id)a0;
- (void)_populateUnavailableContentIdentifiersFromPageDataDictionary:(id)a0;
- (id)_storeItemMetadataForContentIdentifier:(id)a0;
- (BOOL)_storeItemMetadataIsAvailableForContentIdentifier:(id)a0;
- (id)initWithPreviousParser:(id)a0 additionalStoreItemMetadataResponse:(id)a1 options:(struct { BOOL x0; BOOL x1; })a2 sectionBuilder:(id)a3 contentItemBuilder:(id)a4 userIdentity:(id)a5;
- (id)initWithRawResponseOutput:(id)a0 options:(struct { BOOL x0; BOOL x1; })a1 sectionBuilder:(id)a2 contentItemBuilder:(id)a3 userIdentity:(id)a4;

@end
