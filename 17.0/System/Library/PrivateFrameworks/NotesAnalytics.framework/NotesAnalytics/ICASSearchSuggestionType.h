@interface ICASSearchSuggestionType : NSObject <AADataType>

@property (readonly, nonatomic) long long searchSuggestionType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithSearchSuggestionType:(long long)a0;

@end
