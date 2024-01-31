@class NSString, BSSettings, STDictionaryDataDiff;

@interface STStatusBarDataAdditionsStatusDomainDataDiff : NSObject <BSDebugDescriptionProviding, STStatusDomainDataDiff> {
    BSSettings *_changes;
    STDictionaryDataDiff *_entryDictionaryDataDiff;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)diffFromData:(id)a0 toData:(id)a1;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)diffByApplyingDiff:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)isOrthogonalToDiff:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (void)applyToMutableData:(id)a0;
- (id)dataByApplyingToData:(id)a0;

@end
