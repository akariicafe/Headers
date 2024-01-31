@class NSData, NSString;

@interface _PFExternalReferenceData : NSData <NSCopying, NSMutableCopying> {
    NSData *_originalData;
    void *_bytesPtrForStore;
    unsigned long long _bytesLengthForStore;
    void *_bytesPtrForExternalReference;
    unsigned long long _bytesLengthForExternalReference;
    NSString *_externalReferenceLocation;
    NSString *_safeguardLocation;
    id _ubiquitousLocation;
    struct __externalDataFlags { unsigned char _isStoredExternally : 1; unsigned char _hasMappedData : 1; unsigned char _cleanupOnDealloc : 1; unsigned char _dataProtectionLevel : 3; unsigned char _isStoredUbiquitously : 1; unsigned char _createdByUbiquityImport : 1; unsigned int _reserved : 24; } _externalDataFlags;
}

+ (Class)classForKeyedUnarchiver;

- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;
- (id)externalReferenceLocationString;
- (id)initForUbiquityDictionary:(id)a0 store:(id)a1;
- (const char *)_safeguardLocation;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)length;
- (id)initWithStoreBytes:(const void *)a0 length:(unsigned long long)a1 externalLocation:(id)a2 safeguardLocation:(id)a3 protectionLevel:(int)a4 ubiquitousLocation:(id)a5;
- (void)_setBytesForExternalReference:(const void *)a0;
- (unsigned long long)_bytesLengthForStore;
- (void)_moveExternalReferenceToPermanentLocation;
- (const char *)_externalReferenceLocation;
- (int)preferredProtectionLevel;
- (id)mutableCopy;
- (id)copy;
- (const void *)bytes;
- (const void *)_bytesPtrForExternalReference;
- (id)initWithStoreBytes:(const void *)a0 length:(unsigned long long)a1 externalLocation:(id)a2 safeguardLocation:(id)a3 protectionLevel:(int)a4;
- (void)_writeExternalReferenceToInterimLocation;
- (Class)classForCoder;
- (BOOL)hasExternalReferenceContent;
- (id)description;
- (unsigned long long)_bytesLengthForExternalReference;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (id)databaseValue;
- (BOOL)isEqualToData:(id)a0;
- (id)initForExternalLocation:(id)a0 safeguardLocation:(id)a1 data:(id)a2 protectionLevel:(int)a3;
- (void)doCleanupOnDealloc;
- (id)_originalData;
- (void)_deleteExternalReferenceFromPermanentLocation;
- (const void *)_bytesPtrForStore;
- (BOOL)_createdByUbiquityImport;
- (BOOL)isEqual:(id)a0;
- (id)UUID;
- (id)_safeguardLocationString;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
