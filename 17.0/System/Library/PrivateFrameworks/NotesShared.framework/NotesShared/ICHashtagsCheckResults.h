@class NSSet;

@interface ICHashtagsCheckResults : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeOfHashtag;
@property (copy, nonatomic) NSSet *matchingHashtagSuggestions;

- (id)init;
- (void).cxx_destruct;
- (id)debugDescription;

@end
