@interface PUEditMenu : NSObject

+ (void)_autoCropAsset:(id)a0;
+ (BOOL)_canRemoveEditsFromAsset:(id)a0;
+ (void)_enhanceAsset:(id)a0;
+ (void)_performEdit:(id)a0 name:(id)a1 undoManager:(id)a2 edit:(id /* block */)a3;
+ (void)_removeEditsOnAsset:(id)a0;
+ (void)_removeEnhanceFromAsset:(id)a0;
+ (void)_rotateAssetClockwise:(id)a0;
+ (id)editMenuActionsForAsset:(id)a0 undoManager:(id)a1 presentViewController:(id /* block */)a2;

@end
