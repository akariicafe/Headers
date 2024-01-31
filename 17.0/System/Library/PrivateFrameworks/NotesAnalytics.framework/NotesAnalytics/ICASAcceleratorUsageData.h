@class NSString, NSNumber;

@interface ICASAcceleratorUsageData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *maxNumCharTyped;
@property (readonly, nonatomic) NSNumber *endResultCount;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithMaxNumCharTyped:(id)a0 endResultCount:(id)a1;

@end
