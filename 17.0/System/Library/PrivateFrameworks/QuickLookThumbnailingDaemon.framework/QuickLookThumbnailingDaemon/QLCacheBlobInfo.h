@interface QLCacheBlobInfo : NSObject

@property unsigned long long location;
@property unsigned long long length;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
