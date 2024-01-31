@class UIImage, WBSWebExtensionData;

@interface SFWebExtensionButton : NSObject

@property (readonly, nonatomic) WBSWebExtensionData *extension;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) BOOL badged;

- (void).cxx_destruct;
- (id)initWithExtension:(id)a0 image:(id)a1 badged:(BOOL)a2;

@end
