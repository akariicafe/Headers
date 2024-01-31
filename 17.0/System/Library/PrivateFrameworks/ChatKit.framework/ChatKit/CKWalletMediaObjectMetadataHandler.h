@interface CKWalletMediaObjectMetadataHandler : NSObject

+ (id)colorDictionaryFromColor:(id)a0;
+ (id)colorFromDictionaryRepresentation:(id)a0;
+ (double)colorValueForKey:(id)a0 inDictionary:(id)a1;
+ (id)dictionaryRepresentationForText:(id)a0 color:(id)a1;
+ (id)dictionaryRepresentationForText:(id)a0 optionalColor:(id)a1;
+ (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 presentationProperties:(id)a2;
+ (id)paddedImage:(id)a0 horizontalPadding:(double)a1 verticalPadding:(double)a2;
+ (id)previewMetadataWithContentsOfURL:(id)a0 error:(out id *)a1;
+ (id)replyPreviewIconFromFullImage:(id)a0;
+ (BOOL)writePreviewMetadata:(id)a0 toURL:(id)a1 error:(out id *)a2;

@end
