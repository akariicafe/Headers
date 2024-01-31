@interface PESerializationUtility : NSObject

+ (id)contentEditingOutputForContentEditingInput:(id)a0 compositionController:(id)a1 asset:(id)a2 async:(BOOL)a3 onlyChangingOriginalChoice:(BOOL)a4;
+ (id)editSourceForContentEditingInput:(id)a0 useEmbeddedPreview:(BOOL)a1 error:(id *)a2;
+ (id)renderCompositionController:(id)a0 forContentEditingOutput:(id)a1 scalePolicy:(id)a2 applyVideoOrientationAsMetadata:(BOOL)a3 queue:(id)a4 completion:(id /* block */)a5;
+ (id)compositionControllerForContentEditingInput:(id)a0 asShot:(BOOL)a1 error:(id *)a2;
+ (id)compositionControllerForContentEditingInput:(id)a0 asShot:(BOOL)a1 source:(id)a2 error:(id *)a3;
+ (long long)_playbackStyleForAutoLoopController:(id)a0;
+ (unsigned short)_playbackVariationForAutoLoopController:(id)a0;
+ (BOOL)adjustmentDataIsSupported:(id)a0;
+ (id)editSourceForContentEditingInput:(id)a0 error:(id *)a1;
+ (id)editSourceForContentEditingInput:(id)a0 useRawDisplaySizeImage:(BOOL)a1 useEmbeddedPreview:(BOOL)a2 error:(id *)a3;

@end
