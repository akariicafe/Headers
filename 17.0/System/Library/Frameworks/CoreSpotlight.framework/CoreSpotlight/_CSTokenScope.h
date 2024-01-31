@class NSString, NSMutableSet;

@interface _CSTokenScope : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableSet *queryTemplates;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *tokenTitle;
@property (nonatomic) long long scopeType;

+ (id)scopesFromCSTokenScopes:(id)a0 displayString:(id)a1 handles:(id)a2;
+ (id)tokenScopesForAllTokens;
+ (id)tokenScopesForAttachmentNameContains;
+ (id)tokenScopesForAttachmentType;
+ (id)tokenScopesForMessageWithAttachments;
+ (id)tokenScopesForPerson;
+ (id)tokenScopesForSenderContains;
+ (id)tokenScopesForSubjectContains;
+ (id)tokenScopesWithTitles:(id)a0 tokenTitles:(id)a1 scopeTypes:(id)a2 queryAttributesList:(id)a3;
+ (id)tokenScopesWithTitles:(id)a0 tokenTitles:(id)a1 scopeTypes:(id)a2 queryAttributesList:(id)a3 modifiers:(id)a4;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addQueryAttributes:(id)a0;
- (void)addQueryAttributes:(id)a0 modifier:(id)a1;
- (void)addQueryTemplate:(id)a0;
- (id)initWithTitle:(id)a0 tokenTitle:(id)a1 scopeType:(long long)a2;
- (BOOL)isEqualToTokenScope:(id)a0;
- (id)queryForHandles:(id)a0;

@end
