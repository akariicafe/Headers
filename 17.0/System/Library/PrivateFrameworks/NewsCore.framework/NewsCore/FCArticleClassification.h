@class NSString;

@interface FCArticleClassification : NSObject

@property (copy, nonatomic) NSString *articleID;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithArticleID:(id)a0;

@end
