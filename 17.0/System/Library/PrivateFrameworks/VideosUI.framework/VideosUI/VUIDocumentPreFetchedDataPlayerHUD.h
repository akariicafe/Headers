@class NSString, NSArray;

@interface VUIDocumentPreFetchedDataPlayerHUD : VUIDocumentPreFetchedData

@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *tabId;
@property (nonatomic) BOOL isMultiviewPlayer;
@property (retain, nonatomic) NSString *locale;
@property (nonatomic) BOOL playFromStart;
@property (nonatomic) BOOL includeMultiviewButton;
@property (retain, nonatomic) NSArray *excludedCanonicals;
@property (retain, nonatomic) NSArray *multiviewIdentifiers;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)jsonData;

@end
