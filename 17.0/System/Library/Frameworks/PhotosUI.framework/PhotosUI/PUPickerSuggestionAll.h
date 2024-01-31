@interface PUPickerSuggestionAll : NSObject <NSSecureCoding, PUPickerSuggestion>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ shouldReverseSortOrder;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
