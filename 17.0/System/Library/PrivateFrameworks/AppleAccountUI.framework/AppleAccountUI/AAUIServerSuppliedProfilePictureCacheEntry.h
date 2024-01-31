@class UIImage, NSString, NSDate;

@interface AAUIServerSuppliedProfilePictureCacheEntry : NSObject {
    NSDate *_expirationDate;
}

@property (retain, nonatomic) UIImage *picture;
@property (copy, nonatomic) NSString *serverCacheTag;
@property (nonatomic) BOOL updating;
@property (readonly, nonatomic) BOOL expired;

- (void)extendExpirationDate;
- (id)description;
- (void).cxx_destruct;
- (void)expire;

@end
