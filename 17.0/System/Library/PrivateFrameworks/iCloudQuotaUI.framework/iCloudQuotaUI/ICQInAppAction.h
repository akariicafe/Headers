@class NSString;

@interface ICQInAppAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) long long icqActionType;

- (void)encodeWithCoder:(id)a0;
- (void)performAction;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)performActionWithContext:(id)a0;
- (id)initWithTitle:(id)a0 type:(id)a1 icqActionType:(long long)a2;

@end
