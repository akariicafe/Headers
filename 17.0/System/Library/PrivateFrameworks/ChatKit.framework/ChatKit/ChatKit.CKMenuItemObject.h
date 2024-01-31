@class NSString;

@interface ChatKit.CKMenuItemObject : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ imageName;
    void /* unknown type, empty encoding */ handler;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, copy) id /* block */ handler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 imageName:(id)a1 handler:(id /* block */)a2;
- (id)uiAction;

@end
