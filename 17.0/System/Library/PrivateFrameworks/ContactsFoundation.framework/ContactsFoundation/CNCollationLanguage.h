@class NSArray, NSString;

@interface CNCollationLanguage : NSObject

@property (readonly) NSArray *sections;
@property (readonly) NSString *lastCharacter;
@property (readonly) NSString *firstCharacterAfterLanguage;

- (void).cxx_destruct;
- (id)initWithSections:(id)a0 lastCharacter:(id)a1 firstCharacterAfterLanguage:(id)a2;

@end
