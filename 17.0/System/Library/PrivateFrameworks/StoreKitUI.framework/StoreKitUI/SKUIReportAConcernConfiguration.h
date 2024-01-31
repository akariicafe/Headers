@class NSURL, NSString, NSArray;

@interface SKUIReportAConcernConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSURL *reportConcernURL;
@property (nonatomic) long long itemIdentifier;
@property (copy, nonatomic) NSString *reportConcernExplanation;
@property (copy, nonatomic) NSString *selectReasonTitle;
@property (copy, nonatomic) NSString *selectReasonSubtitle;
@property (copy, nonatomic) NSString *privacyNote;
@property (copy, nonatomic) NSArray *reasons;

+ (id)configurationWithTemplateElement:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
