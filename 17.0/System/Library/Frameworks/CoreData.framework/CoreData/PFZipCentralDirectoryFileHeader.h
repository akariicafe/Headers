@class NSString, NSData;

@interface PFZipCentralDirectoryFileHeader : NSObject {
    unsigned short _versionMadeBy;
    unsigned short _versionNeededToExtract;
    unsigned short _generalPurposeBit;
    unsigned short _compressionMethod;
    unsigned short _lastModTime;
    unsigned short _lastModDate;
    unsigned int _crc32;
    unsigned int _compressedSize;
    unsigned int _uncompressedSize;
    unsigned short _filenameLength;
    unsigned short _extraFieldLength;
    unsigned short _fileCommentLength;
    unsigned short _fileStartDiskNumber;
    unsigned short _internalFileAttrs;
    unsigned int _externalFileAttrs;
    unsigned int _localFileHeaderRelativeOffset;
    NSString *_filename;
    NSData *_extraFieldData;
    NSString *_fileComment;
}

- (id)init;
- (void)dealloc;
- (id)description;

@end
