@class NSString, UIImage;

@interface QLDismissAction : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) id /* block */ completionHandler;
@property (nonatomic) long long alertStyle;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic) BOOL shouldDismissQuickLookAutomatically;

+ (id)actionWithTitle:(id)a0 handler:(id /* block */)a1;
+ (id)actionWithTitle:(id)a0 image:(id)a1 alertStyle:(long long)a2 shouldDismissQuickLookAutomatically:(BOOL)a3 handler:(id /* block */)a4;
+ (id)actionWithTitle:(id)a0 image:(id)a1 handler:(id /* block */)a2;
+ (id)actionWithTitle:(id)a0 alertStyle:(long long)a1 shouldDismissQuickLookAutomatically:(BOOL)a2 handler:(id /* block */)a3;
+ (id)actionWithTitle:(id)a0 image:(id)a1 shouldDismissQuickLookAutomatically:(BOOL)a2 handler:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 image:(id)a1 shouldDismissQuickLookAutomatically:(BOOL)a2 handler:(id /* block */)a3;

@end
