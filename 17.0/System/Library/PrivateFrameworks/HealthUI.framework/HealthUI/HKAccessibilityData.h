@class NSArray, NSDictionary;

@interface HKAccessibilityData : NSObject

@property (readonly, nonatomic) NSArray *accessibilityPointData;
@property (readonly, nonatomic) NSDictionary *accessibilitySpans;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPointData:(id)a0 accessibilitySpans:(id)a1;

@end
