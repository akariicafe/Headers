@class NSString;
@protocol XRSchemaAnnotationPropertyReportingDelegate;

@interface XRSchemaAnnotationContainingElementParser : XRXMLElementParser <XRSchemaAnnotationTextValuesDelegate>

@property (copy, nonatomic) NSString *key;
@property (weak, nonatomic) id<XRSchemaAnnotationPropertyReportingDelegate> delegate;

+ (id)_elementNameToClassMap;

- (void).cxx_destruct;
- (id)startElementWithName:(id)a0 attributes:(id)a1 line:(long long)a2 col:(long long)a3;
- (void)textParserCompletedParsing:(id)a0 elementName:(id)a1;

@end
