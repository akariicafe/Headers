@class NSString;

@interface BPSRemoteImageView : UIImageView

@property (copy, nonatomic) NSString *desiredImageName;
@property (copy, nonatomic) NSString *fallbackImageName;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)updateImagesWithAnimation;
- (void)updateImagesWithAnimation:(BOOL)a0;

@end
