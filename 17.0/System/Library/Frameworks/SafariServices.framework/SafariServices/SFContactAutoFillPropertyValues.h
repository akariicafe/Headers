@class NSArray, SFContactAutoFillValue, NSString;

@interface SFContactAutoFillPropertyValues : NSObject

@property (nonatomic) long long selectedIndex;
@property (readonly, nonatomic) SFContactAutoFillValue *selectedValue;
@property (readonly, copy, nonatomic) NSArray *values;
@property (readonly, copy, nonatomic) NSString *property;

- (void).cxx_destruct;
- (id)initWithValues:(id)a0 property:(id)a1;

@end
