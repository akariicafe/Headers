@class NSArray, NSString;

@interface WBSParsecSportsScoreSummary : WBSParsecModel

@property (readonly, copy, nonatomic) NSArray *images;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSArray *scores;

+ (id)schema;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
