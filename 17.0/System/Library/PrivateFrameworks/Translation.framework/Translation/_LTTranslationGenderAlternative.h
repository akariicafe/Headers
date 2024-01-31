@class NSNumber, NSString;

@interface _LTTranslationGenderAlternative : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *group;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } sourceRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } targetRange;
@property (retain, nonatomic) NSString *defaultGender;

+ (id)genderAlternativeFromDictionary:(id)a0 withGroup:(id)a1;
+ (id)genderAlternativesFromDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
