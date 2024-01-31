@class SUUIEmbeddedMediaView, SUUIMediaComponent;

@interface SUUIGalleryPaneViewController : UIViewController

@property (readonly, nonatomic) SUUIMediaComponent *component;
@property (readonly, nonatomic) long long galleryIndex;
@property (readonly, nonatomic) SUUIEmbeddedMediaView *mediaView;

- (void).cxx_destruct;
- (id)initWithMediaComponent:(id)a0 galleryIndex:(long long)a1;

@end
