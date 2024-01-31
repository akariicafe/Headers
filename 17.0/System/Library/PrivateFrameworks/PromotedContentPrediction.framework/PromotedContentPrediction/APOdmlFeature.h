@class NSString, NSDate;
@protocol NSSecureCoding, NSObject;

@interface APOdmlFeature : NSManagedObject

@property (nonatomic) int deploymentID;
@property (retain, nonatomic) NSString *experimentID;
@property (retain, nonatomic) NSString *treatmentID;
@property (retain, nonatomic) NSString *featureType;
@property (retain, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) id<NSSecureCoding, NSObject> value;

@end
