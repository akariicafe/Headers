@class NSString;

@interface URTAlertAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) id /* block */ handler;

+ (id)actionWithTitle:(id)a0 handler:(id /* block */)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 handler:(id /* block */)a1;

@end
