@class NSURL, NSObject;
@protocol OS_dispatch_semaphore;

@interface SKUIBadgeTextAttachment : NSTextAttachment <NSCopying>

@property (retain) NSObject<OS_dispatch_semaphore> *imageLoadingSemaphore;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } badgeSize;
@property (readonly, nonatomic) NSURL *imageURL;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_ensureImageIsLoaded;
- (void)_loadImageWithResourceName:(id)a0 fallbackImage:(id)a1 styleColor:(id)a2;
- (id)initWithViewElement:(id)a0;

@end
