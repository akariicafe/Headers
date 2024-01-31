@interface _UNImageProvider : NSObject

+ (id)generateEphemeralContactsForImageRenderingWithContext:(id)a0 bundleIdentifier:(id)a1 descriptorForRequiredKeys:(id)a2;
+ (id)imageDataForContentURL:(id)a0;
+ (id)_contactForImageRenderingFromContentURLWithContext:(id)a0 bundleIdentifier:(id)a1;
+ (id)_contactsForImageRenderingFromRecipientsWithContext:(id)a0 bundleIdentifier:(id)a1 descriptorForRequiredKeys:(id)a2;
+ (id)_imageDataFromFileSystemForContactURL:(id)a0;
+ (id)_imageDataFromIntentsForContentURL:(id)a0;
+ (id)generateEphemeralContactsForImageRenderingWithContext:(id)a0 descriptorForRequiredKeys:(id)a1;

@end
