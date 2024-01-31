@class NSArray;

@interface NSKeyValueUnnestedProperty : NSKeyValueProperty {
    NSArray *_affectingProperties;
    BOOL _cachedIsaForAutonotifyingIsValid;
    Class _cachedIsaForAutonotifying;
}

- (Class)isaForAutonotifying;
- (BOOL)object:(id)a0 withObservance:(id)a1 willChangeValueForKeyOrKeys:(id)a2 recurse:(BOOL)a3 forwardingValues:(struct { id x0; id x1; } *)a4;
- (id)keyPathIfAffectedByValueForKey:(id)a0 exactMatch:(BOOL *)a1;
- (void)object:(id)a0 didRemoveObservance:(id)a1 recurse:(BOOL)a2;
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)a0;
- (void)dealloc;
- (id)_keyPathIfAffectedByValueForKey:(id)a0 exactMatch:(BOOL *)a1;
- (void)object:(id)a0 withObservance:(id)a1 didChangeValueForKeyOrKeys:(id)a2 recurse:(BOOL)a3 forwardingValues:(struct { id x0; id x1; })a4;
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)a0;
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)a0;
- (id)description;
- (void)object:(id)a0 didAddObservance:(id)a1 recurse:(BOOL)a2;
- (id)_initWithContainerClass:(id)a0 key:(id)a1 propertiesBeingInitialized:(struct __CFSet { } *)a2;
- (void)_givenPropertiesBeingInitialized:(struct __CFSet { } *)a0 getAffectingProperties:(id)a1;
- (void)_addDependentValueKey:(id)a0;
- (Class)_isaForAutonotifying;

@end
