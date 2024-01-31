@class NSString, SXComponentClassification;

@interface SXDeprecatedComponent : NSObject {
    NSString *_typeString;
    SXComponentClassification *_replacementClassification;
}

- (void).cxx_destruct;
- (id)initWithType:(id)a0 withReplacementClassification:(Class)a1;

@end
