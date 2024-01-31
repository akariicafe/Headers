@class NSString;

@interface _DPNumericDataRecordMO : NSManagedObject

@property (nonatomic) double clearNumber;
@property (nonatomic) double creationDate;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) double privateNumber;
@property (nonatomic) BOOL submitted;
@property (nonatomic) long long reportVersion;

@end
