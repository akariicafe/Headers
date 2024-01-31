@class PXViewSpec;

@interface PXBasicTileUserData : NSObject

@property (readonly, nonatomic) PXViewSpec *viewSpec;

+ (id)userDataWithViewSpec:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithViewSpec:(id)a0;

@end
