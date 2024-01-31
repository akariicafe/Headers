@class NSUUID, NSString, LNStaticDeferredLocalizedString, LNValue;

@interface LNSubstitutionValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *parameterIdentifier;
@property (readonly, copy, nonatomic) NSString *titleKey;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *title;
@property (readonly, copy, nonatomic) LNValue *value;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *optionsCollectionTitle;
@property (readonly, copy, nonatomic) NSString *systemImageName;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithParameterIdentifier:(id)a0 title:(id)a1 titleKey:(id)a2 value:(id)a3 optionsCollectionTitle:(id)a4 systemImageName:(id)a5;

@end
