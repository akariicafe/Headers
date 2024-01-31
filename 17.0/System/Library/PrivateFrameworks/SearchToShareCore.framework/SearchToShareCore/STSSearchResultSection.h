@class NSString, NSArray;

@interface STSSearchResultSection : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *results;

- (void).cxx_destruct;
- (id)initWithResultsArray:(id)a0;
- (id)logResults;

@end
