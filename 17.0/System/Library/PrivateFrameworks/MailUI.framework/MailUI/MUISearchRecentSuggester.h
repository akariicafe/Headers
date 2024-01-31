@class NSArray, NSString, NSMutableSet, NSURL, NSObject;
@protocol OS_os_log, EFScheduler;

@interface MUISearchRecentSuggester : NSObject <EFLoggable, MUISearchSuggester> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSURL *_storageURL;
    BOOL _needSave;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) unsigned long long maxRecentCount;
@property (retain, nonatomic) NSMutableSet *recentSearches;
@property (retain, nonatomic) NSArray *supportedCategories;
@property (retain, nonatomic) id<EFScheduler> excludeFromBackupScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *logIdentifier;
@property (readonly, nonatomic) BOOL shouldQueryForAsYouType;
@property (readonly, nonatomic) NSArray *categories;

+ (id)suggesterWithPersistentDirectory:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addSuggestion:(id)a0;
- (void)_excludeStorageURLFromBackup;
- (void)_removeOldSuggestions;
- (void)deleteSuggestion:(id)a0;
- (id)generateSuggestionsUsingPhraseManager:(id)a0 handler:(id /* block */)a1;
- (id)initWithPersistentDirectory:(id)a0;
- (void)loadRecentSearches;
- (void)saveRecentSearches;

@end
