@class XRConstantEngineeringValue, NSMutableArray;

@interface XRConstantEngineeringValueElementParser : XRXMLSimpleStringElementParser {
    NSMutableArray *_fields;
}

@property (readonly, nonatomic) XRConstantEngineeringValue *parsedValue;

+ (id)_elementNameToClassMap;

- (void).cxx_destruct;
- (void)_handleCompletion;
- (void)setValue:(id)a0 forElementName:(id)a1;

@end
