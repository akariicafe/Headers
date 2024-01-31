@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface NTKFaceSupportNotificationPresentationEventRecorder : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMapTable *lookup;

+ (id)sharedRecorder;
+ (id)eventRecorder;

- (id)_init;
- (void).cxx_destruct;
- (id)_validateIdentifier:(id)a0;
- (void)_queue_beginPresentationForIdentifier:(id)a0 pushDate:(id)a1 completion:(id /* block */)a2;
- (void)_queue_endPresentationForIdentifier:(id)a0 status:(long long)a1 artworkUsed:(long long)a2 errorCode:(long long)a3 optOutStatus:(long long)a4 completion:(id /* block */)a5;
- (void)beginPresentationForIdentifier:(id)a0 pushDate:(id)a1 completion:(id /* block */)a2;
- (void)endPresentationForIdentifier:(id)a0 status:(long long)a1 artworkUsed:(long long)a2 errorCode:(long long)a3 optOutStatus:(long long)a4 completion:(id /* block */)a5;

@end
