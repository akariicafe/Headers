@class NSArray;

@interface HPSSiriAvailableLanguages : HPSSetting

@property (readonly, copy, nonatomic) NSArray *languages;

+ (BOOL)supportsSecureCoding;
+ (id)valueClasses;

- (id)initWithCoder:(id)a0;
- (id)initWithKeyPath:(id)a0 languages:(id)a1;

@end
