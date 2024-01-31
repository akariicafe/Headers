@class NSString, NSNumber, NSArray;

@interface ICASSearchResultExposureData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *topHitCountForLongestSearchString;
@property (readonly, nonatomic) NSNumber *hasNonTopHitResultsForLongestSearchString;
@property (readonly, nonatomic) NSArray *searchBufferArray;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithTopHitCountForLongestSearchString:(id)a0 hasNonTopHitResultsForLongestSearchString:(id)a1 searchBufferArray:(id)a2;

@end
