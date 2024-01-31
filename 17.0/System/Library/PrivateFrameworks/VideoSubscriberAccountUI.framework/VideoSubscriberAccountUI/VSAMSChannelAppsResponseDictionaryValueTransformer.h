@interface VSAMSChannelAppsResponseDictionaryValueTransformer : NSValueTransformer

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)transformedValue:(id)a0;
- (id)parseAppData:(id)a0;

@end
