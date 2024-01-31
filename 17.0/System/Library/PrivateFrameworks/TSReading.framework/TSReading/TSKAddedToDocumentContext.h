@interface TSKAddedToDocumentContext : NSObject

+ (id)dragCopyContext;
+ (id)dragMoveContext;
+ (id)importingContextWithImporterID:(id)a0;
+ (id)unhidingContext;
+ (id)changeTrackingSubstorageForCopyContext;
+ (id)exportFootnoteContext;
+ (id)importingMasterTemplateContextWithImporterID:(id)a0;
+ (id)insertingPrototypeContext;
+ (id)movingContext;
+ (id)pastingContext;
+ (id)pastingMatchStyleContext;
+ (id)unarchivingContext;
+ (id)undoDeleteContext;

- (BOOL)wasMoved;
- (BOOL)uniqueBookmarks;
- (BOOL)autoUpdateSmartFields;
- (BOOL)changeTrackingSubstorage;
- (BOOL)exportingFootnotes;
- (id)importerID;
- (BOOL)invokeDOLC;
- (BOOL)matchStyle;
- (void)setTableIDMap:(struct __CFDictionary { } *)a0;
- (BOOL)syncChanges;
- (struct __CFDictionary { } *)tableIDMap;
- (id)undoContext;
- (BOOL)wasDragMoved;
- (BOOL)wasDragOperation;
- (BOOL)wasImported;
- (BOOL)wasImportedFromMasterTemplate;
- (BOOL)wasPasted;
- (BOOL)wasUnarchived;
- (BOOL)wasUndoDelete;
- (BOOL)wasUnhidden;

@end
