@class NSString;

@interface CUIKAlertAction : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) id /* block */ handler;

+ (id)actionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

@end
