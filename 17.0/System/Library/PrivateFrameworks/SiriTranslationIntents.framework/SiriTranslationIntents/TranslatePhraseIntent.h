@class NSString, NSNumber;

@interface TranslatePhraseIntent : INIntent

@property (nonatomic, copy) NSString *phrase;
@property (nonatomic, copy) NSString *targetLanguage;
@property (nonatomic, copy) NSString *sourceLanguage;
@property (nonatomic, copy) NSString *phraseReference;
@property (nonatomic, retain) NSNumber *translateToSourceLanguage;
@property (nonatomic, retain) NSNumber *isProfanity;
@property (nonatomic, retain) NSNumber *isCancel;

- (id)init;
- (BOOL)supportsBSXPCSecureCoding;
- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
