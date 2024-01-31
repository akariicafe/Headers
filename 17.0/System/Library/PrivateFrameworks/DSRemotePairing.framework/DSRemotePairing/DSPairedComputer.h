@class NSString, NSDate;

@interface DSPairedComputer : NSObject

@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSDate *datePaired;
@property (copy, nonatomic) NSString *remotePairingFrameworkIdentifier;
@property (copy, nonatomic) NSString *lockdownFrameworkIdentifier;
@property (copy, nonatomic) NSString *lockdownFrameworkKey;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *marketingName;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDeviceName:(id)a0;

@end
