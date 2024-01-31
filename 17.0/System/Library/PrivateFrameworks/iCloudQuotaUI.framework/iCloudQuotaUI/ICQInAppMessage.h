@class NSString, NSArray, ICQInAppAction;

@interface ICQInAppMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (readonly, copy, nonatomic) NSString *sfSymbolName;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) ICQInAppAction *dismissAction;

+ (id)airplaneMode;
+ (id)fallbackAction;
+ (id)quotaAlmostFull;
+ (id)actionFromOffer:(id)a0;
+ (id)fallbackOffer;
+ (id)quotaAlmostFullForOffer:(id)a0;
+ (id)quotaAlmostFullLongForOffer:(id)a0;
+ (id)quotaFull;
+ (id)quotaFullForOffer:(id)a0;
+ (id)quotaFullLongForOffer:(id)a0;
+ (id)serverUnreachable;
+ (id)universalLinkFromOffer:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentType:(unsigned long long)a0 identifier:(id)a1 reason:(id)a2 title:(id)a3 subTitle:(id)a4 sfSymbolName:(id)a5 actions:(id)a6;
- (id)initWithContentType:(unsigned long long)a0 identifier:(id)a1 reason:(id)a2 title:(id)a3 subTitle:(id)a4 sfSymbolName:(id)a5 actions:(id)a6 dismissAction:(id)a7;

@end
