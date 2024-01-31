@class CLMiLoConnection, NSObject;
@protocol OS_dispatch_queue, CLMiLoConnectionDelegate;

@interface IRMiLoConnectionBridge : NSObject

@property (weak, nonatomic) id<CLMiLoConnectionDelegate> miloConnectionDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CLMiLoConnection *miloConnection;

- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void).cxx_destruct;
- (void)connectServiceWithIdentifier:(id)a0;
- (void)createServiceWithServiceType:(unsigned long long)a0 locationTypes:(id)a1;
- (void)deleteServiceWithIdentifier:(id)a0;
- (void)disconnectServiceWithIdentifier:(id)a0;
- (id)labelObservationWithRequestIdentifier:(id)a0 withPlaceIdentifier:(id)a1;
- (id)requestMiLoPrediction;
- (id)startUpdatingMicroLocationWithConfiguration:(id)a0;
- (void)createMiLoConnection;
- (void)resetMiLoConnection;

@end
