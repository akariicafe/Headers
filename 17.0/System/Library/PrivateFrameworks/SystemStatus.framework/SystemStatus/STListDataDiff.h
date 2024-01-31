@class NSString, STListData;

@interface STListDataDiff : NSObject <BSDescriptionProviding, STStatusDomainDataDiff, NSCopying> {
    STListData *_objectsAdded;
    STListData *_objectsRemoved;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)diffFromListData:(id)a0 toListData:(id)a1;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)diffByApplyingDiff:(id)a0;
- (void)applyToMutableListData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)listDataByApplyingToListData:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)isOrthogonalToDiff:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
