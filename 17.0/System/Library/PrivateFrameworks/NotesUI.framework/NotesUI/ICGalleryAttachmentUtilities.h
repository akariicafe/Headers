@interface ICGalleryAttachmentUtilities : NSObject

+ (id)createAndAddSubAttachmentsToGalleryAttachment:(id)a0 fromDocuments:(id)a1 imageCache:(id)a2 context:(id)a3;
+ (id)createSubAttachmentFromDocument:(id)a0 imageCache:(id)a1 galleryAttachment:(id)a2;
+ (id)imageForSubAttachment:(id)a0;
+ (id)imageForSubAttachment:(id)a0 allowCached:(BOOL)a1;
+ (id)imageForSubAttachment:(id)a0 rotateForMacImageGallery:(BOOL)a1 allowCached:(BOOL)a2;
+ (double)requiredWidthForAttachment:(id)a0 viewHeight:(double)a1 maxWidth:(double)a2;
+ (struct CGSize { double x0; double x1; })sizeOfSubAttachment:(id)a0 forHeight:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeOfViewForAttachment:(id)a0 textViewContentWidth:(double)a1;

@end
