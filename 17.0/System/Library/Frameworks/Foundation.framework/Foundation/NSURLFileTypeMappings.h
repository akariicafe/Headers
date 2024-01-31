@interface NSURLFileTypeMappings : NSObject

+ (id)sharedMappings;

- (id)MIMETypeForExtension:(id)a0;
- (id)extensionsForMIMEType:(id)a0;
- (id)preferredExtensionForMIMEType:(id)a0;

@end
