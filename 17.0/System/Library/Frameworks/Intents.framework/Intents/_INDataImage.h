@class NSData, NSUUID;

@interface _INDataImage : INImage {
    NSUUID *_sha256HashUUID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _hashLock;
}

@property (readonly, copy, nonatomic) NSData *imageData;

+ (BOOL)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (id)_copyWithSubclass:(Class)a0;
- (void)_loadImageDataAndSizeWithHelper:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithImageData:(id)a0;
- (id)_sha256HashUUID;
- (void)_retrieveImageDataWithReply:(id /* block */)a0;
- (BOOL)_requiresRetrieval;
- (void)_setImageData:(id)a0;
- (void).cxx_destruct;
- (id)_imageData;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isEligibleForProxying;
- (id)_identifier;
- (id)initWithCoder:(id)a0;

@end
