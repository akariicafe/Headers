@class NSArray, SSTokenizedString;

@interface MatchedTokenAttribute : NSObject

@property (retain, nonatomic) SSTokenizedString *token;
@property unsigned long long tokenNum;
@property unsigned long long tokenLength;
@property (retain, nonatomic) NSArray *queryPositions;
@property (retain, nonatomic) NSArray *matchedTypes;

- (void).cxx_destruct;
- (id)initMatchedToken:(id)a0 query:(id)a1 matchedType:(id)a2;

@end
