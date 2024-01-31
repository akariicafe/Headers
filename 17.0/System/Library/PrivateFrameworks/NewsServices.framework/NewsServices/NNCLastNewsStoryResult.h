@class NSString;

@interface NNCLastNewsStoryResult : NSObject

@property (copy, nonatomic) NSString *headlineIdentifier;
@property (copy, nonatomic) NSString *headlineTitle;
@property (copy, nonatomic) NSString *sectionName;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSString *sourceName;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (copy, nonatomic) NSString *excerpt;
@property (nonatomic) unsigned long long headlineIndex;
@property (nonatomic) unsigned long long totalHeadlineCount;
@property (nonatomic) long long family;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
