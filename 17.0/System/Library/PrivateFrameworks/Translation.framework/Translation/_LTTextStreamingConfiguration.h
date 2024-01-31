@interface _LTTextStreamingConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double minTimeBetweenTranslations;
@property (readonly, nonatomic) double maxTimeBetweenTranslations;
@property (readonly, nonatomic) double userIdleTime;
@property (readonly, nonatomic) long long maxPartialTranslationAttempts;
@property (readonly, nonatomic) long long minNumberOfCharactersForTranslation;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMinTimeBetweenTranslations:(double)a0 maxTimeBetweenTranslations:(double)a1 userIdleTime:(double)a2 maxPartialTranslationAttempts:(long long)a3 minNumberOfCharactersForTranslation:(long long)a4;
- (void)updateMinTimeBetweenTranslations:(double)a0 maxTimeBetweenTranslations:(double)a1 userIdleTime:(double)a2;

@end
