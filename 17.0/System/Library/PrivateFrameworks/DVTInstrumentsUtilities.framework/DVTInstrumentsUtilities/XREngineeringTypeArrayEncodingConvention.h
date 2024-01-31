@class NSArray, NSString;

@interface XREngineeringTypeArrayEncodingConvention : XREngineeringTypeEncodingConvention

@property (copy, nonatomic) NSArray *fixedTypes;
@property (copy, nonatomic) NSString *remainderType;

- (void).cxx_destruct;

@end
