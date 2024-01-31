@class NSString;

@interface ContextualSuggestionClient.ContextualWidgetSuggestion : ContextualSuggestionClient.ContextualSuggestion {
    void /* unknown type, empty encoding */ extensionBundleIdentifier;
    void /* unknown type, empty encoding */ containerBundleIdentifier;
    void /* unknown type, empty encoding */ kind;
    void /* unknown type, empty encoding */ intent;
    void /* unknown type, empty encoding */ scoreSpecification;
    void /* unknown type, empty encoding */ blendingClientModelSpecification;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
