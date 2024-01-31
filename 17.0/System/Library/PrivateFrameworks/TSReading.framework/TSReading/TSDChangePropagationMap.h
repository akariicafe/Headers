@class NSString, TSUNoCopyDictionary, NSMutableSet;

@interface TSDChangePropagationMap : NSObject <TSDChangePropagationMap> {
    TSUNoCopyDictionary *mDictionary;
    NSMutableSet *mClassesOfChangedPrototypes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)hasAnyChangesForPrototypesOfClasses:(id)a0;
- (void)p_addClassesForPrototype:(id)a0;
- (id)prototypeChangeForPrototype:(id)a0;
- (id)prototypePassingTest:(id /* block */)a0;
- (void)recordDeleteChangeForPrototype:(id)a0 replacement:(id)a1;
- (void)recordModifyChangeForPrototype:(id)a0 property:(int)a1 oldBoxedValue:(id)a2 newBoxedValue:(id)a3;
- (void)recordNewValueForModifyChangeForPrototype:(id)a0 property:(int)a1 newBoxedValue:(id)a2;
- (void)recordOldValueForModifyChangeForPrototype:(id)a0 property:(int)a1 oldBoxedValue:(id)a2;
- (void)recordReplacementChangeForPrototype:(id)a0 replacement:(id)a1;

@end
