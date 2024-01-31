@class NSSet, NSArray, STDictionaryData, NSString, STListData;

@interface STBackgroundActivitiesStatusDomainData : NSObject <BSDebugDescriptionProviding, STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STListData *backgroundActivitiesAttributionListData;
@property (readonly, copy, nonatomic) STDictionaryData *visualDescriptorsByIdentifierDictionaryData;
@property (readonly, copy, nonatomic) NSSet *backgroundActivitiesWithVisualDescriptors;
@property (readonly, copy, nonatomic) NSArray *attributions;
@property (readonly, copy, nonatomic) NSSet *activeBackgroundActivities;
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
- (id)visualDescriptorForBackgroundActivityWithIdentifier:(id)a0;
- (id)_initWithBackgroundActivitiesAttributionListData:(id)a0 visualDescriptorsByIdentifierDictionaryData:(id)a1;
- (id)initWithBackgroundActivitiesAttributionListData:(id)a0 visualDescriptorsByIdentifierDictionaryData:(id)a1;

@end
