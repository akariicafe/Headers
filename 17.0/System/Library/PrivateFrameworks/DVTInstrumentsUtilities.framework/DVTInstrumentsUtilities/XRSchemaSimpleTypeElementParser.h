@class NSString, XRXMLElementParser;
@protocol XRSchemaAnnotationPropertyReportingDelegate;

@interface XRSchemaSimpleTypeElementParser : XRXMLElementParser <XRSchemaAnnotationTextValuesDelegate, XRSchemaRegexPatternDetectionDelegate> {
    XRXMLElementParser *_patternParser;
    NSString *_parsedRegex;
    NSString *_errorMessage;
}

@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<XRSchemaAnnotationPropertyReportingDelegate> delegate;

+ (id)_elementNameToClassMap;

- (void).cxx_destruct;
- (void)checkForAnnotationAndPatternAvailable;
- (void)finishedParsingPatternWithParser:(id)a0 patternValue:(id)a1;
- (id)startElementWithName:(id)a0 attributes:(id)a1 line:(long long)a2 col:(long long)a3;
- (void)textParserCompletedParsing:(id)a0 elementName:(id)a1;

@end
