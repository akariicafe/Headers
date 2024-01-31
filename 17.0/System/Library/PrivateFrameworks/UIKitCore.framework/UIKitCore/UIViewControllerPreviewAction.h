@class NSString;

@interface UIViewControllerPreviewAction : NSObject <NSCopying>

@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) NSString *title;

+ (id)actionWithTitle:(id)a0 handler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithTitle:(id)a0 handler:(id /* block */)a1;

@end
