@class NSString, NSArray;

@interface LNAppShortcutParameterPresentation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *localizedGenericTitle;
@property (readonly, copy, nonatomic) NSString *parameterIdentifier;
@property (readonly, copy, nonatomic) NSString *localizedSpecificTitle;
@property (readonly, copy, nonatomic) NSArray *optionsCollections;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithParameterIdentifier:(id)a0 localizedSpecificTitle:(id)a1 localizedGenericTitle:(id)a2 optionsCollections:(id)a3;
- (id)initWithParameterIdentifier:(id)a0 localizedSpecificTitle:(id)a1 optionsCollections:(id)a2;

@end
