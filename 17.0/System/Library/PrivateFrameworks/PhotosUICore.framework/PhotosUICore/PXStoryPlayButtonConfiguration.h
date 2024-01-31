@class NSString, PXStoryViewModel, PXStoryPlayButtonSpec;

@interface PXStoryPlayButtonConfiguration : NSObject <PXGViewUserData>

@property (readonly, nonatomic) PXStoryViewModel *viewModel;
@property (retain, nonatomic) PXStoryPlayButtonSpec *spec;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
