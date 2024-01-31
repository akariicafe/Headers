@class NSString;

@interface _PASTempfileDescr : NSObject <NSCopying>

@property (readonly, nonatomic) int fd;
@property (readonly, nonatomic) NSString *path;

+ (id)tempfileDescrWithFd:(int)a0 path:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqualToTempfileDescr:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithFd:(int)a0 path:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
