@interface _PRAmbientPosterSnapshotDefinition : PRPosterSnapshotDefinition

@property (nonatomic, getter=isAmbientPresented) BOOL ambientPresented;
@property (nonatomic) long long ambientDisplayStyle;

- (void)applySceneSettings:(id)a0;
- (BOOL)isEqualToDefinition:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 ambientPresentationSettings:(id)a1 renderingContent:(long long)a2 renderingMode:(long long)a3 previewContent:(unsigned long long)a4;
- (id)initWithUniqueIdentifier:(id)a0 ambientPresented:(BOOL)a1 ambientDisplayStyle:(long long)a2 renderingContent:(long long)a3 renderingMode:(long long)a4 previewContent:(unsigned long long)a5;

@end
