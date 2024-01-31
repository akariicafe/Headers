@class NSSet, NSArray, STDictionaryData, NSString, STListData;

@interface STStatusItemsStatusDomainData : NSObject <BSDebugDescriptionProviding, STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STListData *statusItemsAttributionListData;
@property (readonly, copy, nonatomic) STDictionaryData *visualDescriptorsByIdentifierDictionaryData;
@property (readonly, copy, nonatomic) NSSet *statusItemsWithVisualDescriptors;
@property (readonly, copy, nonatomic) NSArray *attributions;
@property (readonly, copy, nonatomic) NSSet *activeStatusItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithData:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)diffFromData:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)dataByApplyingDiff:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)visualDescriptorForStatusItemWithIdentifier:(id)a0;
- (id)_initWithStatusItemsAttributionListData:(id)a0 visualDescriptorsByIdentifierDictionaryData:(id)a1;
- (id)initWithStatusItemsAttributionListData:(id)a0 visualDescriptorsByIdentifierDictionaryData:(id)a1;

@end
