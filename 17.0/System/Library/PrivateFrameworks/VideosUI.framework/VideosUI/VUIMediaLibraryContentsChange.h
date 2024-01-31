@interface VUIMediaLibraryContentsChange : NSObject <NSCopying>

@property (nonatomic) unsigned long long revision;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRevision:(unsigned long long)a0;

@end
