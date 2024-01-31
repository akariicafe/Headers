@class NSString, NSNumber;

@interface HKAccessibilityValue : NSObject

@property (readonly, nonatomic) NSString *valueTitle;
@property (readonly, nonatomic) NSString *valueType;
@property (readonly, nonatomic) NSString *valueDescription;
@property (readonly, nonatomic) NSNumber *valueAsNumber;

- (id)description;
- (void).cxx_destruct;
- (id)initWithValueTitle:(id)a0 valueType:(id)a1 valueDescription:(id)a2 valueAsNumber:(id)a3;

@end
