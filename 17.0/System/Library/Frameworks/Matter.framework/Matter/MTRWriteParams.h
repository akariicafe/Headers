@class NSNumber;

@interface MTRWriteParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *timedWriteTimeout;
@property (copy, nonatomic) NSNumber *dataVersion;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
