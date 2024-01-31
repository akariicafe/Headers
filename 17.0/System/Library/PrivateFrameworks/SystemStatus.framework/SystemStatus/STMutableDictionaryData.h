@class NSDictionary, NSString;

@interface STMutableDictionaryData : STDictionaryData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (copy, nonatomic) NSDictionary *objectsAndKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)applyDiff:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setObjectsAndKeys:(id)a0;

@end
