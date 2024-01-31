@class NSMutableDictionary, NSMutableArray;

@interface TSCH3DTextureAtlas : NSObject {
    NSMutableDictionary *_cachedLabels;
    NSMutableArray *_textures;
}

@property (readonly, nonatomic) float samples;

+ (id)atlas;
+ (id)atlasWithSamples:(float)a0;

- (id)textureAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)initWithSamples:(float)a0;
- (struct tvec3<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; union { int x0; int x1; int x2; } x2; })p_addLabel:(id)a0;
- (struct tvec3<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; union { int x0; int x1; int x2; } x2; })positionForLabel:(id)a0;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })textureSizeAtIndex:(long long)a0;

@end
