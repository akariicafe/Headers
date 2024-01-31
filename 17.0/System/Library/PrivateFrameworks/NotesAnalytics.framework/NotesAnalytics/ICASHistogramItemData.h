@class NSString, NSNumber;

@interface ICASHistogramItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *leftBound;
@property (readonly, nonatomic) NSNumber *rightBound;
@property (readonly, nonatomic) NSNumber *count;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithLeftBound:(id)a0 rightBound:(id)a1 count:(id)a2;

@end
