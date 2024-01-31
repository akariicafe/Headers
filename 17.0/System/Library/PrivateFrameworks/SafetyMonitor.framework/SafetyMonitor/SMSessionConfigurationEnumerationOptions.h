@class NSArray, NSUUID, NSDateInterval, NSDateComponents, CLLocation, NSNumber;

@interface SMSessionConfigurationEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    unsigned long long _batchSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long fetchLimit;
@property (readonly, nonatomic) BOOL sortBySessionStartDate;
@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) NSArray *sessionTypes;
@property (readonly, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, nonatomic) NSDateComponents *startDateComponents;
@property (readonly, nonatomic) NSDateComponents *endDateComponents;
@property (readonly, nonatomic) NSDateInterval *timeInADayInterval;
@property (readonly, nonatomic) BOOL pickOneConfigInTimeInADayInterval;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (copy, nonatomic) CLLocation *startBoundingBoxLocation;
@property (copy, nonatomic) CLLocation *destinationBoundingBoxLocation;
@property (copy, nonatomic) NSNumber *boundingBoxRadius;

- (unsigned long long)batchSize;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (Class)enumeratedType;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBatchSize:(unsigned long long)a0 fetchLimit:(unsigned long long)a1 sortBySessionStartDate:(BOOL)a2 ascending:(BOOL)a3 sessionTypes:(id)a4 timeInADayInterval:(id)a5 pickOneConfigInTimeInADayInterval:(BOOL)a6 dateInterval:(id)a7 startBoundingBoxLocation:(id)a8 destinationBoundingBoxLocation:(id)a9 boundingBoxRadius:(id)a10 sessionIdentifier:(id)a11;

@end
