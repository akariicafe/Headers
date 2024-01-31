@class NSArray, NSNumber, WFFileType;

@interface WFDataDetectorResults : NSObject

@property (readonly, nonatomic) NSArray *textCheckingResults;
@property (readonly, nonatomic) NSArray *URLs;
@property (readonly, nonatomic) NSArray *streetAddresses;
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSArray *dates;
@property (readonly, nonatomic) NSArray *dateComponentsResults;
@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) NSArray *dictionaries;
@property (readonly, nonatomic) WFFileType *dictionaryType;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTextCheckingResults:(id)a0 number:(id)a1 dictionaries:(id)a2 dictionaryType:(id)a3;

@end
