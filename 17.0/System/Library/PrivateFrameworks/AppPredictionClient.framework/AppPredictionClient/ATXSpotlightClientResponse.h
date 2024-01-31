@class NSArray, NSUUID, NSMutableArray, ATXSpotlightHidingUIController;

@interface ATXSpotlightClientResponse : NSObject {
    NSArray *_scores;
    unsigned long long _signpostId;
    NSMutableArray *_codePathIdTriggers;
    ATXSpotlightHidingUIController *_controller;
    BOOL _isZKWHideContextsEnabled;
}

@property (readonly, nonatomic) NSArray *topics;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSUUID *codePathIdTrigger;
@property (readonly, nonatomic) NSArray *codePathIdTriggers;

+ (id)_createEmptyResultsWithCount:(unsigned long long)a0;
+ (unsigned long long)_indexOfFirstSpotlightRecentInServerResults:(id)a0 withSections:(id)a1;
+ (id)_limitingResults:(id)a0 scores:(id)a1 spotlightRecentIndex:(unsigned long long)a2 limit:(unsigned long long)a3;
+ (void)_logWeatherResponsesWithTopics:(id)a0 serverResults:(id)a1;
+ (id)_removeDuplicates:(id)a0;
+ (id)_resultForError:(id)a0 subtitles:(id)a1 searchString:(id)a2;
+ (unsigned long long)_trialSuggestionsMaxCountWithDefault:(unsigned long long)a0;
+ (id)createSectionWithTitle:(id)a0 sectionBundleIdentifier:(id)a1 resultCount:(unsigned long long)a2;

- (id)_removeHidden:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithTopics:(id)a0 scores:(id)a1 sections:(id)a2;
- (id)_addIdentifiersFromTopics:(id)a0 serverTopics:(id)a1;
- (void)_updateSectionBundleIdentifiersWithServerResults:(id)a0;
- (void).cxx_destruct;
- (id)createSectionsFromServerResults:(id)a0;
- (id)_removeDuplicateTopics:(id)a0;
- (void)addCodePathId:(id)a0;
- (id)_createSectionsFromServerResults:(id)a0 limit:(unsigned long long)a1;
- (id)_replaceMissingWithError:(id)a0;
- (id)_createSectionsFromServerResults:(id)a0;

@end
