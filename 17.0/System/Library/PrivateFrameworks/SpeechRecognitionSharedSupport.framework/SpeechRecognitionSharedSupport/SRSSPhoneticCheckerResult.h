@class NSString;

@interface SRSSPhoneticCheckerResult : NSObject

@property (retain, nonatomic) NSString *text;
@property double score;
@property double phoneticSimilarity;
@property double prior;

- (id)description;
- (void).cxx_destruct;

@end
