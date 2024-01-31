@class NSString, NSMutableSet;

@interface STMutableStatusBarOverridesStatusDomainData : STStatusBarOverridesStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData> {
    NSMutableSet *_editedKeys;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)applyDiff:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEntry:(id)a0 forKey:(id)a1;
- (id)editedKeys;

@end
