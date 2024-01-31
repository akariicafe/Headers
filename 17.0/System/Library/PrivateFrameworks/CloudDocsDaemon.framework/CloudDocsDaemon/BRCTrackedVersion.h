@class NSString, BRFileObjectID;

@interface BRCTrackedVersion : NSObject <NSCopying>

@property (readonly, nonatomic) BRFileObjectID *fileObjectID;
@property (readonly, nonatomic) NSString *etagIfLoser;

+ (id)trackedVersionFor:(id)a0 withEtagIfLoser:(id)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
