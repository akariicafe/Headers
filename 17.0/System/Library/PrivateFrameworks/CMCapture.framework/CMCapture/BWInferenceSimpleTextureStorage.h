@class NSString, NSMapTable;

@interface BWInferenceSimpleTextureStorage : NSObject <BWInferenceTextureStorage> {
    NSMapTable *_entriesByRequirement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clear;
- (id)init;
- (void)dealloc;
- (struct { union { id x0; id x1; } x0; id x1; } *)entryForRequirement:(id)a0;
- (void)setEntry:(struct { union { id x0; id x1; } x0; id x1; } *)a0 forRequirement:(id)a1;
- (void)setTexture:(id)a0 forRequirement:(id)a1;

@end
