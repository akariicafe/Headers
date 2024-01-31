@protocol XRSchemaAnnotationTextValuesDelegate;

@interface XRSchemaAnnotationElementParser : XRXMLElementParser

@property (weak, nonatomic) id<XRSchemaAnnotationTextValuesDelegate> delegate;

+ (id)_elementNameToClassMap;

- (void).cxx_destruct;
- (void)textParserCompletedParsing:(id)a0 elementName:(id)a1;

@end
