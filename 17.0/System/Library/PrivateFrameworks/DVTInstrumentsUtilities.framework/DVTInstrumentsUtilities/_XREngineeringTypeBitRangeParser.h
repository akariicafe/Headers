@class NSString;

@interface _XREngineeringTypeBitRangeParser : XRXMLElementParser

@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long start;
@property (nonatomic) long long end;

+ (id)_elementNameToClassMap;

- (void).cxx_destruct;
- (void)_handleCompletion;

@end
