@class CLLocation, NSObject;
@protocol OS_dispatch_queue;

@interface _VLLocalizerAltitudeQuery : NSObject

@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) unsigned long long signpostID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) id /* block */ callback;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 callbackQueue:(id)a1 callback:(id /* block */)a2;

@end
