@class NSArray;

@interface CRRegex : NSObject

@property (retain, nonatomic) NSArray *supportedRegularExpressions;

- (id)init;
- (void).cxx_destruct;
- (BOOL)stringMatchesRegex:(id)a0;

@end
