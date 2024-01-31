@class NSArray, NSString, CNUILikenessRenderingScope;

@interface _CNUILikenessFingerprintGroupImpl : NSObject <_CNUILikenessFingerprintImpl>

@property (readonly, copy) NSArray *impls;
@property (readonly, copy) CNUILikenessRenderingScope *scope;
@property (readonly, copy) NSArray *badges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasContactIdentifier:(id)a0;
- (id)initWithImpls:(id)a0 scope:(id)a1 badges:(id)a2;

@end
