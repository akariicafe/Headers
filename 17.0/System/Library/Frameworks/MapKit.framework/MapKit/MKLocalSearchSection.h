@class NSArray, NSString;

@interface MKLocalSearchSection : NSObject

@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL shouldInterleaveClientResults;
@property (readonly, nonatomic) BOOL enforceServerResultsOrder;
@property (readonly, nonatomic) BOOL enableMapsSuggestServerReranking;
@property (readonly, nonatomic) BOOL isSectionForClientOnlyResults;
@property (readonly, nonatomic) NSArray *includedClientResultTypes;
@property (readonly, nonatomic) NSArray *excludedClientResultTypes;

- (void).cxx_destruct;
- (id)initWithResults:(id)a0 title:(id)a1 shouldInterleaveClientResults:(BOOL)a2 enforceServerResultsOrder:(BOOL)a3 enableMapsSuggestServerReranking:(BOOL)a4 isSectionForClientOnlyResults:(BOOL)a5 includedClientResultTypes:(id)a6 excludedClientResultTypes:(id)a7;

@end
