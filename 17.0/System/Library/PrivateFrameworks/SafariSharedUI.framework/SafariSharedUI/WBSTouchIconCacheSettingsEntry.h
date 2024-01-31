@class NSString, NSDate;

@interface WBSTouchIconCacheSettingsEntry : NSObject <WBSSiteMetadataImageCacheSettingsEntry>

@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSString *UUIDString;
@property (readonly, nonatomic) NSDate *lastRequestDate;
@property (readonly, nonatomic) BOOL lastRequestWasInUserLoadedWebpage;
@property (readonly, nonatomic) long long requestCount;
@property (readonly, nonatomic, getter=isIconInCache) BOOL iconInCache;
@property (readonly, nonatomic) BOOL requestDidSucceed;
@property (readonly, nonatomic) long long transparencyAnalysisResult;
@property (readonly, nonatomic) BOOL higherPriorityIconDownloadFailedDueToNetworkError;
@property (readonly, nonatomic) long long lastResponseStatusCode;
@property (readonly, nonatomic) unsigned long long downloadStatusFlags;
@property (readonly, nonatomic) long long databaseID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entryWithHost:(id)a0 lastRequestDate:(id)a1 lastRequestWasInUserLoadedWebpage:(BOOL)a2 requestCount:(long long)a3 iconInCache:(BOOL)a4 requestDidSucceed:(BOOL)a5 lastResponseStatusCode:(long long)a6 transparencyAnalysisResult:(long long)a7 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)a8 UUIDString:(id)a9;

- (id)init;
- (id)initWithSQLiteRow:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithHost:(id)a0;
- (id)entryWithTransparencyAnalysisResult:(long long)a0;
- (id)entryByAddingRequestInUserLoadedWebPage:(BOOL)a0 isIconInCache:(BOOL)a1 requestDidSucceed:(BOOL)a2 lastResponseStatusCode:(long long)a3 transparencyAnalysisResult:(long long)a4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)a5 UUIDString:(id)a6;
- (id)entryWithDatabaseID:(long long)a0;
- (id)initWithHost:(id)a0 lastRequestDate:(id)a1 lastRequestWasInUserLoadedWebpage:(BOOL)a2 requestCount:(long long)a3 iconInCache:(BOOL)a4 requestDidSucceed:(BOOL)a5 lastResponseStatusCode:(long long)a6 transparencyAnalysisResult:(long long)a7 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)a8 UUIDString:(id)a9;

@end
