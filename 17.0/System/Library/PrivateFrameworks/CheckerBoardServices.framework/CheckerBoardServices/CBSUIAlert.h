@class NSString, NSMutableArray;

@interface CBSUIAlert : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (nonatomic) long long preferredStyle;
@property (retain, nonatomic) NSMutableArray *actions;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) NSString *identifier;

+ (id)alertWithTitle:(id)a0 message:(id)a1 preferredStyle:(long long)a2;

- (void)addAction:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (void)deactivate;
- (id)initWithCoder:(id)a0;
- (id)alertController;
- (id)initWithTitle:(id)a0 message:(id)a1 preferredStyle:(long long)a2;
- (void)_receiveResponse;
- (void)_sendCreate;
- (void)_sendDismiss;

@end
