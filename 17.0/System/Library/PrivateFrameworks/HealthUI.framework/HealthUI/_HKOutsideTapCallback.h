@class UIView;

@interface _HKOutsideTapCallback : NSObject

@property (readonly, weak, nonatomic) UIView *view;
@property (readonly, nonatomic) id /* block */ outsideTapBlock;

- (void).cxx_destruct;
- (id)initWithView:(id)a0 outsideTapBlock:(id /* block */)a1;

@end
