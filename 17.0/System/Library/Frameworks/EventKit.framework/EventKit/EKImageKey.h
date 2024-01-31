@class EKObjectID, NSString;

@interface EKImageKey : NSObject <NSCopying>

@property (readonly, nonatomic) EKObjectID *sourceID;
@property (readonly, nonatomic) NSString *identifier;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSourceID:(id)a0 identifier:(id)a1;

@end
