@class NSUUID, RTMapItemMO, NSDate, NSNumber;

@interface RTVisitMO : NSManagedObject

@property (copy, nonatomic) NSNumber *confidence;
@property (copy, nonatomic) NSNumber *dataPointCount;
@property (copy, nonatomic) NSDate *detectionDate;
@property (copy, nonatomic) NSDate *entryDate;
@property (copy, nonatomic) NSDate *exitDate;
@property (copy, nonatomic) NSDate *locationDate;
@property (copy, nonatomic) NSNumber *locationLatitude;
@property (copy, nonatomic) NSNumber *locationLongitude;
@property (copy, nonatomic) NSNumber *locationReferenceFrame;
@property (copy, nonatomic) NSNumber *locationUncertainty;
@property (copy, nonatomic) NSNumber *placeInferenceConfidence;
@property (copy, nonatomic) NSUUID *placeInferenceMapItemIdentifier;
@property (copy, nonatomic) NSNumber *placeInferencePlaceType;
@property (copy, nonatomic) NSNumber *placeInferenceUserType;
@property (copy, nonatomic) NSNumber *placeInferenceUserTypeSource;
@property (copy, nonatomic) NSNumber *source;
@property (copy, nonatomic) NSNumber *type;
@property (retain, nonatomic) RTMapItemMO *cachedMapItem;
@property (retain, nonatomic) NSUUID *cachedPlaceInferenceLoiIdentifier;

+ (id)fetchRequest;
+ (id)managedObjectWithVisit:(id)a0 inManagedObjectContext:(id)a1;

- (id)mapItem;
- (void)setMapItem:(id)a0;
- (void).cxx_destruct;
- (void)setPlaceInferenceLoiIdentifier:(id)a0;
- (id)placeInferenceLoiIdentifier;

@end
