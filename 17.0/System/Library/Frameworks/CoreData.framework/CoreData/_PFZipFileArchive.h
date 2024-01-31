@class PFZipEndOfCentralDirectoryRecord, NSString, NSDictionary, NSData, NSArray, NSMutableDictionary, NSMutableArray;

@interface _PFZipFileArchive : NSObject {
    NSDictionary *_contents;
    NSData *_data;
    id _provider;
    long long _desc;
    NSString *_path;
    NSArray *_names;
    NSDictionary *_properties;
    NSMutableDictionary *_cachedContents;
    struct __zFlags { unsigned char providerSuppliesContents : 1; unsigned char providerSuppliesStreams : 1; unsigned char providerSuppliesProperties : 1; unsigned char noContentsCaching : 1; unsigned char fileOpen : 1; unsigned int reserved : 27; } _zFlags;
    NSMutableDictionary *_entryNameToData;
    NSMutableDictionary *_entryNameToLocalFileHeader;
    NSMutableDictionary *_entryNameToCentralDirectoryFileHeader;
    NSMutableArray *_localFileHeaders;
    NSMutableArray *_centralDirectoryEntries;
    PFZipEndOfCentralDirectoryRecord *_endRecord;
}

- (id)init;
- (void)dealloc;

@end
