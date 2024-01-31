@class NSArray;

@interface SGSuggestions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSArray *reminders;
@property (readonly, nonatomic) NSArray *walletOrders;
@property (readonly, nonatomic) NSArray *walletPasses;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContacts:(id)a0 events:(id)a1 reminders:(id)a2 walletOrders:(id)a3 walletPasses:(id)a4;

@end
