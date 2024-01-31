@interface PKPaymentSetupProductImageAssets : NSObject <NSCopying>

@property (nonatomic) struct CGImage { } *digitalCardImage;
@property (nonatomic) struct CGImage { } *plasticCardImage;
@property (nonatomic) struct CGImage { } *thumbnailImage;
@property (nonatomic) struct CGImage { } *logoImage;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
