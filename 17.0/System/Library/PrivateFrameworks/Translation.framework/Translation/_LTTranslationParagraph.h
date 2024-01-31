@class NSString, NSArray;

@interface _LTTranslationParagraph : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) BOOL isFinal;
@property (readonly, copy, nonatomic) NSArray *spans;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 text:(id)a1 spans:(id)a2;
- (id)initWithIdentifier:(id)a0 text:(id)a1 spans:(id)a2 isFinal:(BOOL)a3;
- (id)splitIntoSentences;

@end
