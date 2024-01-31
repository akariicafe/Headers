@class NSObject;

@interface PHMemoryFeature : NSObject <NSSecureCoding> {
    NSObject *_subtypeSpecificAttribute;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;

+ (id)stringForType:(unsigned long long)a0;
+ (id)personLocalIdentifierForPersonUniversalIdentifier:(id)a0 photoLibrary:(id)a1;
+ (id)personUniversalIdentifierForPersonLocalIdentifier:(id)a0 photoLibrary:(id)a1;
+ (id)encodedBlockableFeatures:(id)a0 photoLibrary:(id)a1;
+ (id)locationMemoryFeatureWithAreaForName:(id)a0;
+ (id)locationMemoryFeatureWithLocation:(id)a0;
+ (id)memoryFeatureWithData:(id)a0 photoLibrary:(id)a1;
+ (id)peopleMemoryFeatureWithPersonLocalIdentifier:(id)a0;
+ (id)timeMemoryFeatureWithDate:(id)a0;
+ (id)timeMemoryFeatureWithDateInterval:(id)a0;
+ (id)timeMemoryFeatureWithHolidayForName:(id)a0;

- (id)dateInterval;
- (unsigned long long)hash;
- (id)location;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)date;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)personLocalIdentifier;
- (id)_personLocalIdentifierFromSubtypeSpecificAttribute;
- (id)areaName;
- (BOOL)collidesWithAreaWithName:(id)a0;
- (BOOL)collidesWithDate:(id)a0;
- (BOOL)collidesWithDateInterval:(id)a0;
- (BOOL)collidesWithFeature:(id)a0;
- (BOOL)collidesWithHolidayWithName:(id)a0;
- (BOOL)collidesWithLocationAtCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (BOOL)collidesWithPersonWithLocalIdentifier:(id)a0;
- (id)encodedDataWithPhotoLibrary:(id)a0;
- (id)holidayName;

@end
