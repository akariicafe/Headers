@class NSString, UIImage;

@interface UIDocumentInteractionControllerDismissMarkupAction : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)actionWithTitle:(id)a0 handler:(id /* block */)a1;
+ (id)actionWithTitle:(id)a0 image:(id)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 image:(id)a1 handler:(id /* block */)a2;

@end
