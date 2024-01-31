@class NSArray, UIView;

@interface UIDraggingBeginningSessionConfiguration : UIDraggingSessionConfiguration

@property (nonatomic) struct CAPoint3D { double x; double y; double z; } initialCentroidInSourceWindow;
@property (readonly, nonatomic) long long dataOwner;
@property (readonly, nonatomic) UIView *sourceView;
@property (readonly, nonatomic) NSArray *items;

+ (id)configurationWithItems:(id)a0 dataOwner:(long long)a1 initialCentroidInSourceWindow:(struct CAPoint3D { double x0; double x1; double x2; })a2 requiredContextIds:(id)a3 sourceView:(id)a4 accessibilityEndpoint:(id)a5;
+ (id)configurationWithItems:(id)a0 dataOwner:(long long)a1 pointerTouch:(id)a2 requiredContextIds:(id)a3 sourceView:(id)a4;
+ (id)configurationWithItems:(id)a0 dataOwner:(long long)a1 touches:(id)a2 requiredContextIds:(id)a3 sourceView:(id)a4;

- (void).cxx_destruct;
- (id)initWithItems:(id)a0 dataOwner:(long long)a1 requiredContextIds:(id)a2 sourceView:(id)a3;

@end
