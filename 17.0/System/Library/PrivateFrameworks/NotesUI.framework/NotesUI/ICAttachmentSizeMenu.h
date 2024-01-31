@class NSString, NSArray, UIImage;

@interface ICAttachmentSizeMenu : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) short preferredViewSize;
@property (copy, nonatomic) NSArray *supportedSizes;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ selectedSizeHandler;
@property (readonly, nonatomic) BOOL isOverrideVariant;

- (void).cxx_destruct;
- (id)createMenu;
- (id)actionForSize:(short)a0;
- (id)initWithTitle:(id)a0 image:(id)a1 preferredViewSize:(short)a2 supportedSizes:(id)a3 isOverrideVariant:(BOOL)a4 selectedSizeHandler:(id /* block */)a5;
- (id)localizedTitleForSize:(short)a0;

@end
