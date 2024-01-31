@interface ATXUserEducationSuggestionFocusModeSetup : ATXUserEducationSuggestion

@property (readonly, nonatomic) long long modeSemanticType;

+ (long long)suggestionType;
+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithModeSemanticType:(long long)a0;

@end
