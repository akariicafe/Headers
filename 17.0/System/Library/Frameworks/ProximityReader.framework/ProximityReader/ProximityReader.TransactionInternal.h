@class NSString;

@interface ProximityReader.TransactionInternal : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ dataType;
    void /* unknown type, empty encoding */ transactionType;
    void /* unknown type, empty encoding */ amount;
    void /* unknown type, empty encoding */ currencyCode;
    void /* unknown type, empty encoding */ countryCode;
    void /* unknown type, empty encoding */ preferredAIDList;
    void /* unknown type, empty encoding */ vasMode;
    void /* unknown type, empty encoding */ vasRequestName;
    void /* unknown type, empty encoding */ vasMerchants;
    void /* unknown type, empty encoding */ verificationReason;
    void /* unknown type, empty encoding */ terminalPreferredLocaleIdentifier;
    void /* unknown type, empty encoding */ customerPreferredLocaleIdentifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
