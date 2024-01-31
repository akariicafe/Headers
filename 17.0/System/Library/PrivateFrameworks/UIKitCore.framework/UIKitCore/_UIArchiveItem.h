@class NSString;

@interface _UIArchiveItem : NSObject

@property (retain, nonatomic) NSString *pathInArchive;
@property (retain, nonatomic) NSString *fileType;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) BOOL fileSizeIsSet;
@property (nonatomic) BOOL isAppleDoubleFile;
@property (retain, nonatomic) NSString *pathToAppleDoubleRealFileCounterpart;

- (id)description;
- (void).cxx_destruct;

@end
