@class NSUUID;

@interface OUKeyframeMeta : NSObject <NSCopying>

@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraPose;
@property (nonatomic) unsigned long long size;
@property (nonatomic) double timestamp;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
