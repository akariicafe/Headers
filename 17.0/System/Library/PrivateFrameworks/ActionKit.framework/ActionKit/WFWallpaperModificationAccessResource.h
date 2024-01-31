@interface WFWallpaperModificationAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (unsigned long long)status;
- (id)name;
- (id)localizedErrorReasonForStatus:(unsigned long long)a0;
- (id)localizedImportErrorReasonForStatus:(unsigned long long)a0;
- (id)protectedResourceDescription;
- (id)localizedAccessResourceErrorString;

@end
