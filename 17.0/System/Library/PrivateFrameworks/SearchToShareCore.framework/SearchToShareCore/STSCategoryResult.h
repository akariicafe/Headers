@class NSString, SFSearchSuggestion, SFSearchResult;

@interface STSCategoryResult : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long type;
@property (nonatomic) BOOL clearButtonHidden;
@property (retain, nonatomic) SFSearchSuggestion *suggestion;
@property (retain, nonatomic) SFSearchResult *searchResult;

- (void).cxx_destruct;

@end
