@class NSNumber;

@interface EDAMSearchSuggestionResultSpec : FATObject

@property (retain, nonatomic) NSNumber *maxTypeAheadSuggestions;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
