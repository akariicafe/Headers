@class NSSet, NSMutableDictionary, NSArray, NSString;

@interface HKSPChangeSet : NSObject <NSSecureCoding, NSCopying, BSDescriptionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *changeDictionary;
@property (readonly, nonatomic) NSSet *topLevelChangeKeys;
@property (readonly, nonatomic) NSArray *changes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithChangeDictionary:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (void)removeAllChanges;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)addChange:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)changedValueForPropertyIdentifier:(id)a0;
- (id)succinctDescription;
- (void)applyChangeSet:(id)a0;
- (id)deepCopy;
- (BOOL)isEqual:(id)a0;
- (id)originalValueForPropertyIdentifier:(id)a0;
- (BOOL)hasChangeForPropertyIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
