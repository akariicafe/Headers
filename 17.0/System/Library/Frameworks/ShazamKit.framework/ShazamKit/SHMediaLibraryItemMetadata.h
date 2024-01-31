@class NSData;

@interface SHMediaLibraryItemMetadata : NSObject <NSCopying>

@property (readonly, nonatomic) NSData *encodedSystemData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEncodedSystemData:(id)a0;
- (BOOL)validEncodedSystemData:(id)a0;

@end
