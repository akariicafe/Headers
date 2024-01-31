@class NSString, NSDate, NSNumber, RTFingerprintMO;

@interface RTWiFiAccessPointMO : NSManagedObject

@property (copy, nonatomic) NSNumber *age;
@property (copy, nonatomic) NSNumber *channel;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *mac;
@property (copy, nonatomic) NSNumber *rssi;
@property (retain, nonatomic) RTFingerprintMO *fingerprint;

+ (id)fetchRequest;
+ (id)managedObjectWithAccessPoint:(id)a0 inManagedObjectContext:(id)a1;

@end
