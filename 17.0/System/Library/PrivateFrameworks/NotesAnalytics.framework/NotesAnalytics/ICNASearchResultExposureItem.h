@class NSString;

@interface ICNASearchResultExposureItem : NSObject

@property (readonly, nonatomic) NSString *searchString;
@property (nonatomic) unsigned long long topHitResultCount;
@property (nonatomic) unsigned long long nonTopHitResultCount;
@property (nonatomic) BOOL searchResultWasSelected;

- (id)initWithSearchString:(id)a0;
- (void).cxx_destruct;
- (void)updateWithTopHitResultCount:(unsigned long long)a0 nonTopHitResultCount:(unsigned long long)a1;

@end
