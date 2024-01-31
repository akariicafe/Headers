@class NSString;

@interface _UISupplementalPhraseItem : _UISupplementalItem

@property (readonly, nonatomic) NSString *title;

- (id)initWithTitle:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (unsigned long long)_identifier;
- (id)initWithCoder:(id)a0;
- (id)initWithTISupplementalPhraseItem:(id)a0;
- (id)initWithTISupplementalPhraseItem:(id)a0 icon:(id)a1;
- (id)initWithTitle:(id)a0 icon:(id)a1;

@end
