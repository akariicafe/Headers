@class NSArray;

@interface HPSConstrainedSiriLanguageSetting : HPSSiriLanguageSetting

@property (readonly, copy, nonatomic) NSArray *items;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyPath:(id)a0 items:(id)a1;
- (id)initWithKeyPath:(id)a0 languageValue:(id)a1 items:(id)a2;

@end
