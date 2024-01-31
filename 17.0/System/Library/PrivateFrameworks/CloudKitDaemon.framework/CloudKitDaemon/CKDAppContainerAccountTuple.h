@class NSString, CKDAppContainerTuple;

@interface CKDAppContainerAccountTuple : NSObject <NSCopying>

@property (readonly, copy, nonatomic) CKDAppContainerTuple *appContainerTuple;
@property (readonly, copy, nonatomic) NSString *accountID;

- (unsigned long long)hash;
- (id)initWithAppContainerTuple:(id)a0 accountID:(id)a1;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
