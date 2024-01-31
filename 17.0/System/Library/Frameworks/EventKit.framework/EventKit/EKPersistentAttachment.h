@interface EKPersistentAttachment : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)propertyKeyForUniqueIdentifier;
+ (id)propertiesToUnloadOnCommit;

- (void)setExternalModificationTag:(id)a0;
- (id)externalModificationTag;
- (id)URLString;
- (id)fileFormat;
- (id)externalID;
- (void)setFlags:(int)a0;
- (void)setFileSize:(id)a0;
- (int)flags;
- (int)entityType;
- (void)setUUID:(id)a0;
- (id)description;
- (id)fileSize;
- (void)setExternalID:(id)a0;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setURLString:(id)a0;
- (void)setFileFormat:(id)a0;
- (id)XPropertiesData;
- (void)setFileNameRaw:(id)a0;
- (id)fileNameRaw;
- (id)localRelativePath;
- (id)securityScopedLocalURLForArchivedDataWrapper;
- (id)securityScopedLocalURLWrapper;
- (id)securityScopedURLWrapperForPendingFileCopy;
- (void)setLocalRelativePath:(id)a0;
- (void)setSecurityScopedLocalURLForArchivedDataWrapper:(id)a0;
- (void)setSecurityScopedLocalURLWrapper:(id)a0;
- (void)setSecurityScopedURLWrapperForPendingFileCopy:(id)a0;
- (void)setShouldSetQuarantineAttributesOnCopiedFile:(BOOL)a0;
- (void)setXPropertiesData:(id)a0;
- (BOOL)shouldSetQuarantineAttributesOnCopiedFile;

@end
