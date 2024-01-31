@class NSDate, NSDateInterval, NSObject;
@protocol NSCopying;

@interface PLExistingMomentData : NSObject

@property (readonly, nonatomic) NSObject<NSCopying> *objectID;
@property (readonly, nonatomic) unsigned long long numberOfAssets;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDateInterval *dateInterval;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithMoment:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)registerAsset:(id)a0;

@end
