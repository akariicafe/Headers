@class NSArray, NSDate;

@interface _DKLocalChanges : NSObject

@property (readonly, nonatomic) NSArray *insertedObjects;
@property (readonly, nonatomic) NSArray *tombstones;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

- (void).cxx_destruct;

@end
