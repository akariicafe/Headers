@interface ICSidecarInsertMenuController : NSObject {
    void /* unknown type, empty encoding */ services;
    void /* unknown type, empty encoding */ serviceProvider;
    void /* unknown type, empty encoding */ menuDidChange;
    void /* unknown type, empty encoding */ didReceiveItems;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ presentingViewController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ presentingSourceView;
@property (nonatomic) void /* unknown type, empty encoding */ presentingSourceRect;
@property (nonatomic, copy) id /* block */ menuDidChange;
@property (nonatomic, copy) id /* block */ didReceiveItems;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)menu;
- (void)sidecarDevicesDidChange:(id)a0;

@end
