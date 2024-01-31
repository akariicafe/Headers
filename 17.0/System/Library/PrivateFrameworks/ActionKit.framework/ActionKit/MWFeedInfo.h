@class NSString, NSURL;

@interface MWFeedInfo : NSObject <NSCoding>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSURL *url;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
