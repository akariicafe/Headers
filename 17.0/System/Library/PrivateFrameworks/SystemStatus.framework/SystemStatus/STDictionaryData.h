@class NSArray, NSDictionary, NSString, NSMutableDictionary;

@interface STDictionaryData : NSObject <BSDebugDescriptionProviding, STStatusDomainData, STStatusDomainDataDifferencing, NSSecureCoding> {
    NSMutableDictionary *_objectsAndKeys;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *allKeys;
@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (readonly, copy, nonatomic) NSDictionary *objectsAndKeys;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)diffFromData:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0;
- (id)dataByApplyingDiff:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)initWithObjectsAndKeys:(id)a0;
- (BOOL)validateObjectsAndKeysWithValidObjectClasses:(id)a0 keyClasses:(id)a1;

@end
