@class NSURL, NSString, NSDate;

@interface IKBookmark : NSObject

@property (nonatomic) long long bookmarkID;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descr;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic, getter=isStarred) BOOL starred;
@property (copy, nonatomic) NSString *privateSource;
@property (copy, nonatomic) NSString *hashString;
@property (nonatomic) double progress;
@property (retain, nonatomic) NSDate *progressDate;

+ (id)bookmarkWithBookmarkID:(long long)a0;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithBookmarkID:(long long)a0;

@end
