@class NSString, UIWindow;

@interface DOCUISession : NSObject

@property (class, readonly, nonatomic) UIWindow *keyWindow;
@property (class, readonly, nonatomic) UIWindow *anyWindowPreferingKeyWindow;
@property (class, readonly, nonatomic) NSString *defaultContentSizeCategory;

+ (id)shared;
+ (void)performAfterCATransactionCommits:(id /* block */)a0;
+ (id)windowWithRootViewController:(id)a0;

@end
