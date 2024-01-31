@protocol PXGViewUserData;

@interface PXGViewPayload : NSObject <NSCopying>

@property (readonly, nonatomic) Class viewClass;
@property (readonly, copy, nonatomic) id<PXGViewUserData> userData;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithViewClass:(Class)a0 userData:(id)a1;

@end
