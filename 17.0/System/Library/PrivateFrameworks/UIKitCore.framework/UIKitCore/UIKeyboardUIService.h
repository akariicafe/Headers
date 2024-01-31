@class NSMutableArray, NSString, CAContext, BSServiceConnectionListener, NSObject;
@protocol OS_dispatch_queue;

@interface UIKeyboardUIService : NSObject <BSServiceConnectionListenerDelegate> {
    BSServiceConnectionListener *_bsConnectionlistener;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CAContext *_context;
    NSMutableArray *_slots;
}

@property (readonly, nonatomic) CAContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;
+ (id)serviceInterface;

- (id)init;
- (void)dealloc;
- (void)createContext;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (void)clearSlots;
- (int)createSlot:(struct CGSize { double x0; double x1; })a0;

@end
