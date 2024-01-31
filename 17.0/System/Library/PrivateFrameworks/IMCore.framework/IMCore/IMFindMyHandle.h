@class NSString, FMLHandle, FMFHandle;

@interface IMFindMyHandle : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) FMFHandle *fmfHandle;
@property (readonly, nonatomic) FMLHandle *fmlHandle;

+ (id)handleWithIdentifier:(id)a0;
+ (id)handleWithFMFHandle:(id)a0;
+ (id)handleWithFMLHandle:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
