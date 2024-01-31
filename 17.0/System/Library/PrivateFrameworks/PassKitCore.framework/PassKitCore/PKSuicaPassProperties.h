@class NSDecimalNumber, NSString;

@interface PKSuicaPassProperties : PKTransitPassProperties

@property (readonly, copy, nonatomic) NSDecimalNumber *transitBalance;
@property (readonly, copy, nonatomic) NSString *transitBalanceCurrencyCode;
@property (readonly, nonatomic, getter=isInStation) BOOL inStation;
@property (readonly, nonatomic, getter=isInShinkansenStation) BOOL inShinkansenStation;
@property (readonly, nonatomic, getter=isBalanceAllowedForCommute) BOOL balanceAllowedForCommute;
@property (readonly, nonatomic, getter=isLowBalanceGateNotificationEnabled) BOOL lowBalanceGateNotificationEnabled;
@property (readonly, nonatomic, getter=isGreenCarTicketUsed) BOOL greenCarTicketUsed;
@property (readonly, nonatomic, getter=isBlacklisted) BOOL blacklisted;

+ (Class)equalityClass;
+ (id)passPropertiesForPass:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_initWithProperties:(id)a0;

@end
