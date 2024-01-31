@class NSString, _TtC7Sharing33_SFAirDropTransferObserverAdaptor, _SFAirDropTransferObserver;
@protocol SFAirDropTransferObserverDelegate;

@interface SFAirDropTransferObserver : NSObject <SFAirDropTransferObserverDelegate>

@property (retain, nonatomic) _SFAirDropTransferObserver *legacyObserver;
@property (retain, nonatomic) _TtC7Sharing33_SFAirDropTransferObserverAdaptor *modernObserver;
@property (nonatomic) BOOL isModern;
@property (weak, nonatomic) id<SFAirDropTransferObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)removedTransfer:(id)a0;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (void)updatedTransfer:(id)a0;

@end
