@interface PRSMutablePosterDescriptor : PRSPosterDescriptor

+ (id)mutableDescriptorWithIdentifier:(id)a0;
+ (id)mutableDescriptorWithIdentifier:(id)a0 role:(id)a1;

- (BOOL)storeGalleryOptions:(id)a0 error:(out id *)a1;
- (BOOL)storeUserInfo:(id)a0 error:(out id *)a1;

@end
