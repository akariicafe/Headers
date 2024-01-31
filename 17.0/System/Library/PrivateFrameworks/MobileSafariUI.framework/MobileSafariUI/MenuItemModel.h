@class NSString;

@interface MenuItemModel : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) id payload;
@property (readonly, copy, nonatomic) id /* block */ action;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 payload:(id)a2 action:(id /* block */)a3;

@end
