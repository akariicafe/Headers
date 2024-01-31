@protocol ATXUserEducationSuggestion;

@interface ATXUserEducationSuggestionEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<ATXUserEducationSuggestion> userEducationSuggestion;
@property (readonly, nonatomic) unsigned long long userEducationSuggestionEventType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUserEducationSuggestion:(id)a0 userEducationSuggestionEventType:(unsigned long long)a1;

@end
