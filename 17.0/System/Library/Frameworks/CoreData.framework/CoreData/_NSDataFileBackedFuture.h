@class NSURL, NSUUID, NSData;

@interface _NSDataFileBackedFuture : NSData <_NSFileBackedFuture, NSSecureCoding> {
    NSURL *_fileURL;
    NSURL *_originalFileURL;
    NSData *_realData;
    NSData *_bytes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURL *fileURL;
@property (readonly) unsigned long long fileSize;
@property (readonly) NSUUID *UUID;

+ (Class)classForKeyedUnarchiver;

- (id)initWithStoreMetadata:(id)a0 directory:(id)a1;
- (unsigned long long)hash;
- (void)dealloc;
- (unsigned long long)length;
- (unsigned long long)_bytesLengthForStore;
- (void)encodeWithCoder:(id)a0;
- (const void *)bytes;
- (Class)classForCoder;
- (id)description;
- (void)_moveToPermanentLocation;
- (BOOL)_isCloudKitSupportOriginated;
- (void)_copyToInterimLocation;
- (void *)_bytesPtrForStore;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1 originalFileURL:(id)a2;

@end
