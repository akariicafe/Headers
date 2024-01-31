@class NSString, NSDate;

@interface FCArticleTagsExpiration : NSObject

@property (readonly, nonatomic) NSString *tagID;
@property (readonly, nonatomic) NSDate *expireTime;

+ (id)tagsExpirationsFromRecord:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTagsExpiration:(id)a0;

@end
