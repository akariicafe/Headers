@class NSData, NSNumber;

@interface MTROperationalCredentialsClusterNOCStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSData *noc;
@property (copy, nonatomic) NSData *icac;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
