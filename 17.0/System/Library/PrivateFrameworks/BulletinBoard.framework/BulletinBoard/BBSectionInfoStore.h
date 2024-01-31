@class NSString, NSMutableDictionary, NSMutableSet, NSMutableArray;
@protocol BBPersistentStoreInterface, BBEffectiveSettingsProvider;

@interface BBSectionInfoStore : NSObject <BBSectionInfoStoreInterface> {
    NSMutableDictionary *_sectionInfoByID;
    NSMutableSet *_activeSectionIDs;
    NSMutableArray *_sortedSectionIDs;
    NSMutableDictionary *_clearedSectionsByID;
    id<BBEffectiveSettingsProvider> _effectiveSettings;
    id<BBPersistentStoreInterface> _persistence;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSectionInfo:(id)a0 forSectionID:(id)a1;
- (void).cxx_destruct;
- (id)sectionInfoByID;
- (void)_sortSectionIDs:(id)a0 usingGuideArray:(id)a1;
- (id)activeSectionIDs;
- (void)addActiveSectionID:(id)a0;
- (id)allSortedActiveSections:(BOOL)a0;
- (id)allSortedSectionInfo:(BOOL)a0;
- (id)allUnsortedSectionInfoIDs;
- (id)clearedInfoForSectionID:(id)a0;
- (id)clearedSectionsByID;
- (id)effectiveSectionInfoForSectionInfo:(id)a0;
- (id)initWithEffectiveSettingsProvider:(id)a0 persistence:(id)a1;
- (void)removeSectionWithID:(id)a0;
- (id)sectionInfoForSectionID:(id)a0 effective:(BOOL)a1;
- (id)sectionInfosByIDForSectionIDs:(id)a0 effective:(BOOL)a1;
- (void)setClearedInfo:(id)a0 forSectionID:(id)a1;
- (void)setClearedSectionsByID:(id)a0;
- (void)setSectionInfoByID:(id)a0;
- (id)sortedSectionIDs;
- (id)sortedSectionInfoForSectionIDs:(id)a0 effective:(BOOL)a1;

@end
