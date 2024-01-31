@interface HKClinicalStorageLocations : NSObject

+ (id)downloadableAttachmentsDirectory;
+ (id)homeMobileDirectory;
+ (id)mobileLibraryHealthDirectory;
+ (BOOL)removeLocalFileAtURL:(id)a0 error:(id *)a1;
+ (BOOL)storeData:(id)a0 inLocalFileAtURL:(id)a1 error:(id *)a2;

@end
