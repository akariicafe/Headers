@interface _LTTranslationStatistics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long inputTokenCount;
@property (nonatomic) long long inputSubtokenCount;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
