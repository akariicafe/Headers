@class WLFeaturePayload, NSString, WebBookmarkCollection;

@interface WLBookmarksMigrator : NSObject <WLDataclassMigrating, WLAnalyticsDataSource> {
    WebBookmarkCollection *_collection;
}

@property (weak, nonatomic) WLFeaturePayload *featurePayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentType;
+ (id)_bookmarkFolderAtTitlePath:(id)a0 withinBookmarkFolder:(id)a1;
+ (id)_bookmarkFolderAtTitlePath:(id)a0 withinRootFolder:(id)a1;
+ (id)_createBookmarkFolderWithTitle:(id)a0 UUID:(id)a1;
+ (id)_createRootBookmarkFolder;

- (void)enable;
- (id)dataType;
- (id)contentType;
- (void)setState:(id)a0;
- (void).cxx_destruct;
- (void)addWorkingTime:(unsigned long long)a0;
- (id)importWillBegin;
- (BOOL)accountBased;
- (void)estimateItemSizeForSummary:(id)a0 account:(id)a1;
- (void)importDataFromProvider:(id /* block */)a0 forSummaries:(id)a1 summaryStart:(id /* block */)a2 summaryCompletion:(id /* block */)a3;
- (id)importDidEnd;
- (void)setEstimatedDataSize:(unsigned long long)a0;
- (BOOL)storeRecordDataInDatabase;
- (BOOL)wantsSegmentedDownloads;

@end
