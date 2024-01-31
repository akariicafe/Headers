@class UIColor, NSString, NSXPCListenerEndpoint, NSPredicate;

@interface UIFontPickerViewControllerConfiguration : NSObject <NSSecureCoding, BSXPCSecureCoding, BSDescriptionProviding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, setter=_setHideSearchBar:) BOOL _hideSearchBar;
@property (retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
@property (nonatomic) BOOL _includeDefaultFont;
@property (copy, nonatomic) NSString *_filterFamilyName;
@property (nonatomic) BOOL _showsSectionIndexBar;
@property (retain, nonatomic) NSXPCListenerEndpoint *_clientFontContextEndpoint;
@property (nonatomic) BOOL includeFaces;
@property (nonatomic) BOOL displayUsingSystemFont;
@property (nonatomic) unsigned int filteredTraits;
@property (copy, nonatomic) NSPredicate *filteredLanguagesPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)filterPredicateForFilteredLanguages:(id)a0;

- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
