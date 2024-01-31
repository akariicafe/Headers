@class NSArray, NSMapTable, _UIAppearanceCustomizableClassInfo, NSMutableArray;

@interface _UIAppearance : NSObject {
    NSArray *_containerList;
    NSMutableArray *_appearanceInvocations;
    NSMapTable *_invocationSources;
}

@property (readonly, nonatomic) _UIAppearanceCustomizableClassInfo *_customizableClassInfo;

+ (id)recursiveDescription;
+ (id)_rootAppearancesNode;
+ (void)_applyInvocationsTo:(id)a0 window:(id)a1;
+ (id)_recorderForSource:(id)a0;
+ (id)_appearanceWithClassInfo:(id)a0 containerList:(id)a1;
+ (void)_applyInvocationsTo:(id)a0 window:(id)a1 matchingSelector:(SEL)a2 onlySystemInvocations:(BOOL)a3;
+ (id)_currentAppearanceSource;
+ (void)_applyInvocationsTo:(id)a0 window:(id)a1 matchingSelector:(SEL)a2;
+ (void)_setCurrentAppearanceSource:(id)a0;
+ (id)_appearanceForClass:(Class)a0 withContainerList:(id)a1;
+ (id)_recordersExcludingSource:(id)a0 withWindow:(id)a1;
+ (void)_removeWindow:(id)a0 forSource:(id)a1;
+ (id)_newAppearanceWithClassInfo:(id)a0 containerList:(id)a1;
+ (BOOL)_hasAnyCustomizations;
+ (void)_appendDescriptionOfNode:(id)a0 toString:(id)a1 atLevel:(unsigned long long)a2;
+ (BOOL)_hasCustomizationsForClass:(Class)a0 guideClass:(Class)a1;
+ (id)_pendingRecordInvocationsForSource:(id)a0;
+ (void)_setInvalidatesViewsOnAppearanceChange:(BOOL)a0;
+ (id)_windowsForSource:(id)a0;
+ (void)_removeInvocationsForSource:(id)a0;
+ (void)_addWindow:(id)a0 forSource:(id)a1;
+ (id)appearancesAtNode:(id)a0 withObject:(id)a1;
+ (id)_appearanceNodeForClassInfo:(id)a0 containerList:(id)a1;

- (id)_traitCollection;
- (SEL)_beginListeningForAppearanceEventsForSetter:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (void)_handleSetterInvocation:(id)a0;
- (void)_invalidateAppearanceInWindow:(id)a0;
- (BOOL)_isRecordingInvocations;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (BOOL)_isValidAppearanceForCustomizableObject:(id)a0;
- (void)_appendDescriptionToString:(id)a0 atLevel:(unsigned long long)a1;
- (void)_handleGetterInvocation:(id)a0;
- (void)_removeInvocationsForSource:(id)a0;
- (id)_appearanceInvocations;

@end
