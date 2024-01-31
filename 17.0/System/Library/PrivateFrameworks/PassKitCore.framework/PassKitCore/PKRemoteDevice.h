@class PKRemotePaymentInstrument, NSString, NSArray, NSUUID, NSDate;

@interface PKRemoteDevice : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *modelIdentifier;
@property (retain, nonatomic) NSDate *lastSeen;
@property (readonly, nonatomic) BOOL canMakePayments;
@property (nonatomic) long long proximityState;
@property (nonatomic) BOOL isLocked;
@property (nonatomic) BOOL userDisabled;
@property (nonatomic) BOOL deviceDisabled;
@property (retain, nonatomic) NSArray *remotePaymentInstruments;
@property (retain, nonatomic) PKRemotePaymentInstrument *defaultRemotePaymentInstrument;
@property (copy, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSUUID *bluetoothUUID;
@property (nonatomic) BOOL supportsFaceID;
@property (retain, nonatomic) NSArray *supportedSetupFeatures;
@property (nonatomic) long long majorOperatingSystemVersion;

+ (id /* block */)acceptedComparatorWithPaymentSupportedQuery:(id)a0;
+ (id /* block */)preferenceComparator;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)_deviceTypeForModelIdentifier:(id)a0;
- (id)initWithIDSDevice:(id)a0;
- (BOOL)isEqualToRemoteDevice:(id)a0;
- (id)pk_idsDestination;

@end
