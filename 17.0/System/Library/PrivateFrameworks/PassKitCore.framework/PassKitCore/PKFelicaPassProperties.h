@class NSNumber, NSDateComponents, NSString;

@interface PKFelicaPassProperties : PKTransitPassProperties <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isShinkansenTicketActive) BOOL shinkansenTicketActive;
@property (nonatomic, getter=isGreenCarTicketUsed) BOOL greenCarTicketUsed;
@property (nonatomic, getter=isInShinkansenStation) BOOL inShinkansenStation;
@property (nonatomic, getter=isBalanceAllowedForCommute) BOOL balanceAllowedForCommute;
@property (nonatomic, getter=isLowBalanceGateNotificationEnabled) BOOL lowBalanceGateNotificationEnabled;
@property (copy, nonatomic) NSDateComponents *shinkansenValidityStartDate;
@property (copy, nonatomic) NSNumber *shinkansenValidityTerm;
@property (copy, nonatomic) NSString *shinkansenOriginStation;
@property (copy, nonatomic) NSString *shinkansenDestinationStation;
@property (copy, nonatomic) NSDateComponents *shinkansenDepartureTime;
@property (copy, nonatomic) NSDateComponents *shinkansenArrivalTime;
@property (copy, nonatomic) NSString *shinkansenTrainName;
@property (copy, nonatomic) NSNumber *shinkansenCarNumber;
@property (copy, nonatomic) NSNumber *shinkansenSeatRow;
@property (copy, nonatomic) NSNumber *shinkansenSeatNumber;
@property (copy, nonatomic) NSString *shinkansenSecondaryOriginStation;
@property (copy, nonatomic) NSString *shinkansenSecondaryDestinationStation;
@property (copy, nonatomic) NSDateComponents *shinkansenSecondaryDepartureTime;
@property (copy, nonatomic) NSDateComponents *shinkansenSecondaryArrivalTime;
@property (copy, nonatomic) NSString *shinkansenSecondaryTrainName;
@property (copy, nonatomic) NSNumber *shinkansenSecondaryCarNumber;
@property (copy, nonatomic) NSNumber *shinkansenSecondarySeatRow;
@property (copy, nonatomic) NSNumber *shinkansenSecondarySeatNumber;
@property (copy, nonatomic) NSString *greenCarOriginStation;
@property (copy, nonatomic) NSString *greenCarDestinationStation;
@property (copy, nonatomic) NSDateComponents *greenCarValidityStartDate;
@property (nonatomic) BOOL hasGreenCarTicket;
@property (nonatomic) BOOL hasShinkansenTicket;

+ (Class)equalityClass;
+ (id)passPropertiesForPass:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_stringForRow:(id)a0 seat:(id)a1;
- (id)displayableShinkansenSeat;
- (id)displayableShinkansenSecondarySeat;
- (id)initWithFelicaAppletState:(id)a0 paymentApplication:(id)a1;
- (id)initWithTransitAppletState:(id)a0 paymentApplication:(id)a1 fieldCollection:(id)a2;
- (BOOL)isInStation;

@end
