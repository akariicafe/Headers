@class NSString, UIImage, NSAttributedString;

@interface UIAccessibilityCustomAction : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSAttributedString *attributedName;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (copy, nonatomic) id /* block */ actionHandler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAttributedName:(id)a0 actionHandler:(id /* block */)a1;
- (id)initWithAttributedName:(id)a0 image:(id)a1 actionHandler:(id /* block */)a2;
- (id)initWithAttributedName:(id)a0 image:(id)a1 target:(id)a2 selector:(SEL)a3;
- (id)initWithAttributedName:(id)a0 target:(id)a1 selector:(SEL)a2;
- (id)initWithName:(id)a0 actionHandler:(id /* block */)a1;
- (id)initWithName:(id)a0 image:(id)a1 actionHandler:(id /* block */)a2;
- (id)initWithName:(id)a0 image:(id)a1 target:(id)a2 selector:(SEL)a3;
- (id)initWithName:(id)a0 target:(id)a1 selector:(SEL)a2;

@end
