@class CoreDAVItemParserMapping, NSArray, NSString, NSMutableDictionary, NSDictionary;
@protocol CalDAVChecksumLocalDBInfoProvider;

@interface CalDAVContainerChecksumSyncTaskGroup : CalDAVContainerSyncTaskGroup {
    NSString *_unusedSyncToken;
    NSString *_unusedCTag;
    NSMutableDictionary *_serverURLsToChecksums;
    NSDictionary *_localURLsToChecksums;
}

@property (retain, nonatomic) NSArray *preferredChecksumVersions;
@property (nonatomic) id<CalDAVChecksumLocalDBInfoProvider> delegate;
@property (retain, nonatomic) CoreDAVItemParserMapping *bestServerChecksumVersion;
@property (readonly, nonatomic) BOOL mismatchDetected;

- (void)startTaskGroup;
- (void).cxx_destruct;
- (id)copyAdditionalResourcePropertiesToFetch;
- (void)deleteResourceURLs:(id)a0;
- (void)receivedPropertiesToValues:(id)a0 forURL:(id)a1;
- (BOOL)shouldDownloadResource:(id)a0 localETag:(id)a1 serverETag:(id)a2;
- (id)_calculatedCalendarHome;
- (BOOL)_hadOutOfDateCollectionToken;
- (void)_handleResponseToChecksumPropfind:(id)a0;
- (void)_serverChecksumSupportPropfind;
- (id)initWithFolderURL:(id)a0 previousCTag:(id)a1 previousSyncToken:(id)a2 actions:(id)a3 accountInfoProvider:(id)a4 taskManager:(id)a5 appSpecificCalendarItemClass:(Class)a6;

@end
