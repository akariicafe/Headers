@class NSData, UIImage;

@interface GKAvatarImage : NSObject

@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) UIImage *image;

- (void).cxx_destruct;
- (id)initWithPNGData:(id)a0 useUIImage:(BOOL)a1;
- (void)prepareForUsingUIImage:(BOOL)a0;

@end
