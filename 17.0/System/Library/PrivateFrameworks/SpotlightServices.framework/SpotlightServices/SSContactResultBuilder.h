@class NSString, CNMutableContact;

@interface SSContactResultBuilder : SSResultBuilder

@property (nonatomic) int resultType;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *personQueryIdentifier;
@property (retain, nonatomic) NSString *realContactIdentifier;
@property (retain, nonatomic) NSString *personIdentifier;
@property (retain, nonatomic) CNMutableContact *contact;
@property (readonly, nonatomic) NSString *fullName;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (BOOL)doesNotContainObject:(id)a0 inArray:(id)a1;
+ (id)infoTupleWithKeyTitle:(id)a0 values:(id)a1;
+ (BOOL)isCoreSpotlightResult;
+ (id)labeledValuesFromStrings:(id)a0 labeledValues:(id)a1 withStringForLabeledValueBlock:(id /* block */)a2 labeledValueForStringBlock:(id /* block */)a3;
+ (id)rowsForKey:(id)a0 withLabeledValues:(id)a1 commandButtonItemForString:(id /* block */)a2;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildBadgingImageWithThumbnail:(id)a0;
- (id)buildSocialMediaResultForEntity;
- (id)buildAction;
- (id)buildBackgroundColor;
- (id)buildCommand;
- (id)buildDescriptions;
- (id)buildFooterResultForEntity;
- (id)buildFootnote;
- (id)buildHeaderResultForEntity;
- (id)buildPreviewCommand;
- (id)buildResult;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)initWithResult:(id)a0 contactEntity:(id)a1 contact:(id)a2;

@end
