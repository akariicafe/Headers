@class NSString, SFUZipArchive;

@interface SFUZipInputBundle : NSObject <SFUInputBundle> {
    SFUZipArchive *_zipArchive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)bufferedInputStreamForEntry:(id)a0;
- (void)copyEntry:(id)a0 toFile:(id)a1;
- (unsigned int)crc32ForEntry:(id)a0;
- (BOOL)hasEntryWithName:(id)a0;
- (id)initWithZipArchive:(id)a0;
- (id)inputStreamForEntry:(id)a0;
- (long long)lengthOfEntry:(id)a0;

@end
