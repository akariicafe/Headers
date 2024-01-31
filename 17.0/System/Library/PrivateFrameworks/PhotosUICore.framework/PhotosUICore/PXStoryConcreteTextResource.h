@class NSString, PXStoryTextResourceInfo;

@interface PXStoryConcreteTextResource : PXStoryConcreteResource <PXStoryTextResource>

@property (readonly, nonatomic) long long px_storyResourceTextType;
@property (readonly, nonatomic) PXStoryTextResourceInfo *px_storyResourceTextResourceInfo;
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier;
@property (readonly, nonatomic) long long px_storyResourceKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAssetCollection:(id)a0 type:(long long)a1;
- (id)initWithChapter:(id)a0 type:(long long)a1;
- (id)initWithIdentifier:(id)a0 kind:(long long)a1;

@end
