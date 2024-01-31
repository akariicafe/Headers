@class UIWindow;

@interface _UIDragEventSample : NSObject

@property (readonly, nonatomic) UIWindow *window;
@property (readonly, nonatomic) struct CAPoint3D { double x; double y; double z; } sceneLocation;
@property (readonly, nonatomic) struct CAPoint3D { double x; double y; double z; } locationInWindow;
@property (readonly, nonatomic) BOOL isApplicationEnter;
@property (readonly, nonatomic) BOOL isApplicationWithin;
@property (readonly, nonatomic) BOOL isApplicationExit;
@property (readonly, nonatomic) BOOL isPolicyDriven;
@property (readonly, nonatomic) BOOL isDragEnd;
@property (readonly, nonatomic) unsigned int windowServerHitTestContextID;
@property (nonatomic) BOOL hasBeenDelivered;

+ (id)sampleFromHIDEvent:(struct __IOHIDEvent { } *)a0;

- (id)description;
- (void).cxx_destruct;
- (id)hitTestWithEvent:(id)a0;

@end
