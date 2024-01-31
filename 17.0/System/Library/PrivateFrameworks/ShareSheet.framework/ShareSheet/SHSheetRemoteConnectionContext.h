@class NSString, NSArray, _UIActivityDiscoveryContext, NSDictionary, NSData;

@interface SHSheetRemoteConnectionContext : NSObject

@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) _UIActivityDiscoveryContext *discoveryContext;
@property (copy, nonatomic) NSArray *assetIdentifiers;
@property (copy, nonatomic) NSArray *urlsBeingShared;
@property (copy, nonatomic) NSDictionary *sandboxExtensionsByfileURLPath;
@property (nonatomic) BOOL shouldSuggestFamilyMembers;
@property (nonatomic) BOOL isSharePlayAvailable;
@property (nonatomic) BOOL supportsCollaboration;
@property (nonatomic) BOOL hideSuggestions;
@property (copy, nonatomic) NSArray *peopleSuggestionBundleIds;
@property (copy, nonatomic) NSData *processedImageResultsData;
@property (nonatomic) double peopleSuggestionsTimeout;
@property (nonatomic) unsigned long long xrRenderingMode;
@property (nonatomic) BOOL instantShareSheet;
@property (nonatomic) BOOL remoteShareSheet;

- (id)initWithSessionIdentifier:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)createContextDictionary;

@end
