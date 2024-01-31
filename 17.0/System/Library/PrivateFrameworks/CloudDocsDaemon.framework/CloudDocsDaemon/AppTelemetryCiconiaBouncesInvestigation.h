@interface AppTelemetryCiconiaBouncesInvestigation : PBCodable <NSCopying> {
    struct { unsigned char aliasToFileCount : 1; unsigned char aliasToFolderCount : 1; unsigned char aliasToPackageCount : 1; unsigned char aliasToSymlinkCount : 1; unsigned char fileToAliasCount : 1; unsigned char fileToFolderCount : 1; unsigned char fileToPackageCount : 1; unsigned char fileToSymlinkCount : 1; unsigned char folderToAliasCount : 1; unsigned char folderToFileCount : 1; unsigned char folderToPackageCount : 1; unsigned char folderToSymlinkCount : 1; unsigned char nonConflictingKindCount : 1; unsigned char packageToAliasCount : 1; unsigned char packageToFileCount : 1; unsigned char packageToFolderCount : 1; unsigned char packageToSymlinkCount : 1; unsigned char symlinkToAliasCount : 1; unsigned char symlinkToFileCount : 1; unsigned char symlinkToFolderCount : 1; unsigned char symlinkToPackageCount : 1; } _has;
}

@property (nonatomic) BOOL hasFolderToPackageCount;
@property (nonatomic) int folderToPackageCount;
@property (nonatomic) BOOL hasFolderToFileCount;
@property (nonatomic) int folderToFileCount;
@property (nonatomic) BOOL hasFolderToSymlinkCount;
@property (nonatomic) int folderToSymlinkCount;
@property (nonatomic) BOOL hasFolderToAliasCount;
@property (nonatomic) int folderToAliasCount;
@property (nonatomic) BOOL hasPackageToFolderCount;
@property (nonatomic) int packageToFolderCount;
@property (nonatomic) BOOL hasPackageToFileCount;
@property (nonatomic) int packageToFileCount;
@property (nonatomic) BOOL hasPackageToSymlinkCount;
@property (nonatomic) int packageToSymlinkCount;
@property (nonatomic) BOOL hasPackageToAliasCount;
@property (nonatomic) int packageToAliasCount;
@property (nonatomic) BOOL hasFileToFolderCount;
@property (nonatomic) int fileToFolderCount;
@property (nonatomic) BOOL hasFileToPackageCount;
@property (nonatomic) int fileToPackageCount;
@property (nonatomic) BOOL hasFileToSymlinkCount;
@property (nonatomic) int fileToSymlinkCount;
@property (nonatomic) BOOL hasFileToAliasCount;
@property (nonatomic) int fileToAliasCount;
@property (nonatomic) BOOL hasSymlinkToFolderCount;
@property (nonatomic) int symlinkToFolderCount;
@property (nonatomic) BOOL hasSymlinkToPackageCount;
@property (nonatomic) int symlinkToPackageCount;
@property (nonatomic) BOOL hasSymlinkToFileCount;
@property (nonatomic) int symlinkToFileCount;
@property (nonatomic) BOOL hasSymlinkToAliasCount;
@property (nonatomic) int symlinkToAliasCount;
@property (nonatomic) BOOL hasAliasToFolderCount;
@property (nonatomic) int aliasToFolderCount;
@property (nonatomic) BOOL hasAliasToPackageCount;
@property (nonatomic) int aliasToPackageCount;
@property (nonatomic) BOOL hasAliasToFileCount;
@property (nonatomic) int aliasToFileCount;
@property (nonatomic) BOOL hasAliasToSymlinkCount;
@property (nonatomic) int aliasToSymlinkCount;
@property (nonatomic) BOOL hasNonConflictingKindCount;
@property (nonatomic) int nonConflictingKindCount;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
