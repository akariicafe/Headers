@class NSString, NSArray;

@interface ChatKit.CKBannerButtonObject : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ handler;
    void /* unknown type, empty encoding */ menuItems;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSArray *menuItems;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 handler:(id /* block */)a1;
- (id)initWithTitle:(id)a0 handler:(id /* block */)a1 menuItems:(id)a2;

@end
