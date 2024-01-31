@class WFDrawerItem, NSString, NSObject;
@protocol UIScrollViewDelegate;

@interface WFEditorDrawerScrollViewDelegate : NSObject <UIScrollViewDelegate>

@property (readonly, nonatomic) WFDrawerItem *drawerItem;
@property (weak, nonatomic) NSObject<UIScrollViewDelegate> *originalDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)findScrollViewInView:(id)a0;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithDrawerItem:(id)a0 originalDelegate:(id)a1;

@end
