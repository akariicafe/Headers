@interface BRInodeObjectID : BRFileObjectID {
    unsigned long long _ino;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)rawID;
- (BOOL)isFpfsItem;
- (id)description;
- (id)asString;
- (id)initWithFileID:(unsigned long long)a0;
- (unsigned char)type;
- (BOOL)isFolderOrAliasID;
- (id)initWithCoder:(id)a0;
- (id)folderID;

@end
