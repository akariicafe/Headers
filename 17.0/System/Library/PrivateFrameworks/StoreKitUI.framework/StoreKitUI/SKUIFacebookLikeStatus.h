@class NSArray, NSURL;

@interface SKUIFacebookLikeStatus : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *friendNames;
@property (copy, nonatomic) NSURL *URL;
@property (nonatomic, getter=isUserLiked) BOOL userLiked;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURL:(id)a0 likeStatusDictionary:(id)a1;

@end
