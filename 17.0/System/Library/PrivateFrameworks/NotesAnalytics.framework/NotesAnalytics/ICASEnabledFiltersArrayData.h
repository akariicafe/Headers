@class NSString;

@interface ICASEnabledFiltersArrayData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *filterType;
@property (readonly, nonatomic) NSString *filterValue;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithFilterType:(id)a0 filterValue:(id)a1;

@end
