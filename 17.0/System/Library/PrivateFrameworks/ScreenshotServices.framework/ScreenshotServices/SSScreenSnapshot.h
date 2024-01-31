@class UIImage, UIScreen;

@interface SSScreenSnapshot : NSObject {
    UIImage *_image;
    UIScreen *_screen;
}

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIScreen *screen;

+ (id)snapshotWithImage:(id)a0 fromScreen:(id)a1;

- (void).cxx_destruct;

@end
