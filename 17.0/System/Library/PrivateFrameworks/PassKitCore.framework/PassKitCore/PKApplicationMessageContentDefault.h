@class NSString, PKApplicationMessageIcon;

@interface PKApplicationMessageContentDefault : PKApplicationMessageContent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKApplicationMessageIcon *icon;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *body;

+ (id)createWithGroup:(id)a0 action:(id)a1 icon:(id)a2 title:(id)a3 body:(id)a4;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
