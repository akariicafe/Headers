@class NSString, STDictionaryData;

@interface STDictionaryDataDiff : NSObject <BSDescriptionProviding, STStatusDomainDataDiff, NSCopying> {
    STDictionaryData *_objectsAndKeysAdded;
    STDictionaryData *_objectsAndKeysRemoved;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)diffFromDictionaryData:(id)a0 toDictionaryData:(id)a1;

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
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyToMutableDictionaryData:(id)a0;
- (id)dictionaryDataByApplyingToDictionaryData:(id)a0;

@end
