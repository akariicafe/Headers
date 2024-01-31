@class NSString;

@interface TNPersistentChartMediator : TSCHPersistentChartMediator <TSKDocumentObject, TSCECalculationEngineRegistration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)willModify;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })formulaOwnerUID;
- (id)formulaOwner;
- (id)nsFormulaOwnerUID;
- (id)objectToArchiveInDependencyTracker;
- (unsigned short)ownerKind;
- (BOOL)registerLast;
- (void)registerWithCalcEngineForDocumentLoad:(id)a0 ownerKind:(unsigned short)a1;
- (void)unregisterFromCalcEngine:(id)a0;

@end
