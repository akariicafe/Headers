@class NSString, NSArray;

@interface UNLocalizedString : NSString

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSArray *arguments;
@property (readonly, copy, nonatomic) NSString *value;

+ (BOOL)supportsSecureCoding;
+ (id)localizedStringForKey:(id)a0 arguments:(id)a1 value:(id)a2;

- (BOOL)_allowsDirectEncoding;
- (id)init;
- (unsigned long long)hash;
- (unsigned long long)length;
- (void)encodeWithCoder:(id)a0;
- (id)un_localizedStringKey;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)_initWithKey:(id)a0 arguments:(id)a1 value:(id)a2;
- (Class)classForCoder;
- (id)description;
- (id)un_localizedStringValue;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)isEqual:(id)a0;
- (id)un_localizedStringArguments;
- (id)initWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
