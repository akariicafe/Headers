@class NSString;

@interface NSSmartQuoteOptions : NSObject <NSCopying, NSSecureCoding> {
    NSString *_leftSingleQuote;
    NSString *_rightSingleQuote;
    NSString *_apostrophe;
    NSString *_leftDoubleQuote;
    NSString *_rightDoubleQuote;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *leftSingleQuote;
@property (readonly, copy) NSString *rightSingleQuote;
@property (readonly, copy) NSString *apostrophe;
@property (readonly, copy) NSString *leftDoubleQuote;
@property (readonly, copy) NSString *rightDoubleQuote;

+ (id)smartQuoteOptionsForLocale:(id)a0;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLeftSingleQuote:(id)a0 rightSingleQuote:(id)a1 apostrophe:(id)a2 leftDoubleQuote:(id)a3 rightDoubleQuote:(id)a4;

@end
