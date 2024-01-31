@class NSXPCListenerEndpoint, NSArray, UIDraggingSystemTouchRoutingPolicy, NSIndexSet, PBItemCollection, NSString;

@interface UIDraggingSessionConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *touchIDs;
@property (nonatomic) struct CGPoint { double x0; double x1; } initialCentroid;
@property (nonatomic) struct CAPoint3D { double x; double y; double z; } _initialCentroid;
@property (retain, nonatomic) UIDraggingSystemTouchRoutingPolicy *routingPolicy;
@property (retain, nonatomic) NSXPCListenerEndpoint *axEndpoint;
@property (retain, nonatomic) NSIndexSet *preferredPreviewIndexes;
@property (nonatomic) unsigned int coordinateSpaceSourceContextID;
@property (nonatomic) unsigned long long coordinateSpaceSourceLayerRenderID;
@property (retain, nonatomic) PBItemCollection *itemCollection;
@property (retain, nonatomic) NSXPCListenerEndpoint *dataProviderEndpoint;
@property (nonatomic) BOOL supportsSystemDrag;
@property (retain, nonatomic) NSString *sceneIdentifier;
@property (retain, nonatomic) NSString *persistentSceneIdentifier;
@property (nonatomic) BOOL initiatedWithPointer;
@property (retain, nonatomic) NSString *displayIdentifier;
@property (nonatomic) BOOL avoidsKeyboardSuppression;
@property (nonatomic) BOOL rotatable;
@property (nonatomic) BOOL resizable;
@property (nonatomic) struct CGSize { double width; double height; } minimumResizableSize;
@property (nonatomic) struct CGSize { double width; double height; } maximumResizableSize;
@property (nonatomic) BOOL wantsElasticEffects;
@property (nonatomic) double originalRotation;
@property (nonatomic) struct CGSize { double width; double height; } originalScale;

+ (id)configurationWithItemCollection:(id)a0 dataProviderEndpoint:(id)a1 initialCentroidInSourceWindow:(struct CAPoint3D { double x0; double x1; double x2; })a2 sourceView:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (struct CGPoint { double x0; double x1; })initialCentroid;
- (void).cxx_destruct;
- (void)setInitialCentroid:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;

@end
