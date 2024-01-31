@interface FxMetaPlugWrapper : NSObject <FxMetaPlugWrapper>

- (id)defaultFolderURLs;
- (id)fxMetaPlugsInFolderURLs:(id)a0 includingBuiltIns:(BOOL)a1;
- (Class)plugInClass;
- (id)plugInTypeUUID;

@end
