@protocol XRSchemaRegexPatternDetectionDelegate;

@interface XRSchemaPatternRestrictionElementParser : XRXMLElementParser

@property (weak, nonatomic) id<XRSchemaRegexPatternDetectionDelegate> delegate;

+ (id)_elementNameToClassMap;

- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
