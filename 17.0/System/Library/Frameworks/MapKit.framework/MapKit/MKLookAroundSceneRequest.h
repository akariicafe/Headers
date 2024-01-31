@class MKMapItem;
@protocol MKLocationManagerOperation, MKMapServiceTicket;

@interface MKLookAroundSceneRequest : NSObject {
    id<MKLocationManagerOperation> _singleLocationUpdate;
    id<MKMapServiceTicket> _ticket;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _loading;
    BOOL _cancelled;
}

@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;

- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (id)initWithMapItem:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)_handleMapItems:(id)a0 requestType:(unsigned long long)a1 error:(id)a2 completionHandler:(id /* block */)a3;
- (void)_performLookupRequestWithMapItem:(id)a0 orCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 completionHandler:(id /* block */)a2;
- (void)getSceneWithCompletionHandler:(id /* block */)a0;

@end
