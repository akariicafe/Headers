@class SUDownloadOptions, SUDescriptor, SUDownloadMetadata, SUOperationProgress;

@interface SUDownload : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SUDescriptor *descriptor;
@property (retain, nonatomic) SUOperationProgress *progress;
@property (retain, nonatomic) SUDownloadOptions *downloadOptions;
@property (retain, nonatomic) SUDownloadMetadata *metadata;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)totalSpaceConsumed;
- (BOOL)isValidDownload;
- (BOOL)allowCellularDownload;

@end
