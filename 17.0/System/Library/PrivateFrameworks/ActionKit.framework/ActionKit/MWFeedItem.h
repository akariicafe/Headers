@class NSString, NSArray, NSDate;

@interface MWFeedItem : NSObject <NSCoding>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDate *updated;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSArray *enclosures;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)mainImageURL;
- (id)asWFArticle;

@end
