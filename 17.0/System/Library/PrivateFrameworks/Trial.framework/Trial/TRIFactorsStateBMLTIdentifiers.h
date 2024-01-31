@class NSString;

@interface TRIFactorsStateBMLTIdentifiers : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *bmltId;
@property (readonly, nonatomic) int deploymentId;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBMLTId:(id)a0 deploymentId:(int)a1;
- (BOOL)isEqualToIdentifiers:(id)a0;

@end
