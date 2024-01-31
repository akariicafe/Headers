@class SUUIItem, NSString, NSURL, UIViewController;

@interface SUUIProductPageAction : NSObject {
    NSString *_urlTitle;
}

@property (nonatomic) long long actionType;
@property (retain, nonatomic) SUUIItem *item;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) id /* block */ viewControllerBlock;
@property (readonly, nonatomic) UIViewController *viewController;

+ (id)actionWithType:(long long)a0;

- (void).cxx_destruct;

@end
