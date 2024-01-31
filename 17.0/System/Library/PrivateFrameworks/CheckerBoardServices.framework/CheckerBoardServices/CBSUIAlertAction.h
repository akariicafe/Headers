@class NSString;

@interface CBSUIAlertAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ handler;

+ (id)alertActionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

@end
