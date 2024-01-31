@class NSString, NSArray;

@interface UIDictationMultilingualString : NSObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *dominantLanguage;
@property (retain, nonatomic) id correctionIdentifier;
@property (retain, nonatomic) NSString *interactionIdentifier;
@property (copy, nonatomic) NSArray *phrases;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithText:(id)a0 forLanguage:(id)a1;

@end
