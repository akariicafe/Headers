@class NSObject, NSMutableSet;
@protocol OS_dispatch_queue;

@interface WBSSiriIntelligenceDonor : NSObject {
    NSObject<OS_dispatch_queue> *_coreSpotlightDonationSerialQueue;
    NSMutableSet *_identifiersLeftToReindex;
}

@property (class, readonly, nonatomic) WBSSiriIntelligenceDonor *sharedInstance;

+ (id)coreSpotlightPageDonationIdentifierForProfileWithIdentifier:(id)a0;
+ (id)historyItemIdentifierForURL:(id)a0;
+ (id)_bookmarkItemIdentifierForURLString:(id)a0;
+ (id)_coreSpotlightItemIdentifierForURLString:(id)a0;
+ (id)_historyItemIdentifierForURLString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_computeCoreSpotlightIDsForBookmarks:(id)a0;
- (void)_computeCoreSpotlightIndexingRequirementsForAllBookmarksIDs:(id)a0 indexedBookmarksIDs:(id)a1 outIndexIDs:(id *)a2 outRemoveIDs:(id *)a3;
- (id)_contentDescriptionForURL:(id)a0;
- (id)_coreSpotlightItemsSubarrays:(id)a0;
- (void)_donateDataForPageWithURL:(id)a0 history:(id)a1 fullPageText:(id)a2 readerText:(id)a3 autocompleteTriggers:(id)a4 profileIdentifier:(id)a5 personalizationData:(id)a6;
- (void)_donateHistoryItemsToCoreSpotlightCreatedAfterDate:(id)a0 beforeDate:(id)a1 historiesForProfiles:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)_indexCoreSpotlightData:(id)a0 completionHandler:(id /* block */)a1;
- (void)_indexHistoryItemsToCoreSpotlight:(id)a0 completionHandler:(id /* block */)a1;
- (id)_indexedBookmarksIDs:(id *)a0;
- (void)_removeCoreSpotlightDataWithIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)_sanitizeAttributeSet:(id)a0;
- (id)_searchableItemsForIDs:(id)a0 allBookmarks:(id)a1;
- (void)donateAllHistoryToCoreSpotlightForProfiles:(id)a0 completionHandler:(id /* block */)a1;
- (void)donateDataForPageWithURL:(id)a0 fullPageText:(id)a1 readerText:(id)a2 profileIdentifier:(id)a3 personalizationData:(id)a4;
- (void)donateSafariBookmarksToCoreSpotlight:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)donateTextInWebView:(id)a0 extractedReaderText:(id)a1 canDonateFullPageText:(BOOL)a2 profileIdentifier:(id)a3 personalizationData:(id)a4 extractInnerText:(id /* block */)a5;
- (void)export30DaysWorthOfHistoryToCoreSpotlightForProfiles:(id)a0 completionHandler:(id /* block */)a1;
- (void)processRemovedHistoryItems:(id)a0;
- (void)reindexAllBookmarkAndHistoryItems:(id)a0 historiesForProfiles:(id)a1 withAcknowledgementHandler:(id /* block */)a2;
- (void)reindexBookmarkAndHistoryItemsWithIdentifiers:(id)a0 allBookmarks:(id)a1 historiesForProfiles:(id)a2 withAcknowledgementHandler:(id /* block */)a3;
- (void)removeAllCoreSpotlightHistoryDataDonatedBySafariForProfileWithIdentifier:(id)a0;

@end
