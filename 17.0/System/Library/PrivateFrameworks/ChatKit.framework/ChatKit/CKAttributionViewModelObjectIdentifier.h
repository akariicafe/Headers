@interface CKAttributionViewModelObjectIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) long long associatedMessageType;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAssociatedMessageType:(long long)a0;

@end
