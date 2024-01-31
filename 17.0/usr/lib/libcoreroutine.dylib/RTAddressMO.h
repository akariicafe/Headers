@class NSData, NSString, NSArray, NSDate, RTDeviceMO, NSUUID, RTMapItemMO, NSNumber;

@interface RTAddressMO : RTCloudManagedObject

@property (copy, nonatomic) NSString *administrativeArea;
@property (copy, nonatomic) NSString *administrativeAreaCode;
@property (retain, nonatomic) NSArray *areasOfInterest;
@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) long long flags;
@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *inlandWater;
@property (copy, nonatomic) NSNumber *island;
@property (copy, nonatomic) NSString *locality;
@property (copy, nonatomic) NSString *ocean;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *subAdministrativeArea;
@property (copy, nonatomic) NSString *subLocality;
@property (retain, nonatomic) NSArray *subPremises;
@property (copy, nonatomic) NSString *subThoroughfare;
@property (copy, nonatomic) NSString *thoroughfare;
@property (copy, nonatomic) NSString *iso3166CountryCode;
@property (copy, nonatomic) NSString *iso3166SubdivisionCode;
@property (retain, nonatomic) RTDeviceMO *device;
@property (retain, nonatomic) RTMapItemMO *mapItem;

+ (id)fetchRequest;
+ (id)managedObjectWithAddress:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithAddress:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;

@end
