@class NSString;

@interface PLPhotoLibraryPathManagerIdentifier : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned char bundleFormat;

- (unsigned long long)hash;
- (id)initWithPathManager:(id)a0;
- (BOOL)isEqualToPathManagerIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLibraryID:(id)a0 libraryFormat:(unsigned char)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
