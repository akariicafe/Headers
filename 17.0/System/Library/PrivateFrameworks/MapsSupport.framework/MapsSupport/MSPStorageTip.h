@class NSString;

@interface MSPStorageTip : NSObject {
    id /* block */ _enablementAction;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSString *representedApp;
@property (readonly, nonatomic) long long expectedSize;

- (void).cxx_destruct;
- (void)enableWithCompletionHandler:(id /* block */)a0;
- (id)initWithTitle:(id)a0 message:(id)a1 expectedSize:(long long)a2 enablementAction:(id /* block */)a3;

@end
