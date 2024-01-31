@class CATOperationQueue;
@protocol CRKIDSAddressTranslator, CRKIDSPrimitives, CRKTimerPrimitives;

@interface CRKPrimitiveBackedCertificateConduit : NSObject <CRKCertificateConduit>

@property (readonly, nonatomic) id<CRKIDSPrimitives> IDSPrimitives;
@property (readonly, nonatomic) id<CRKIDSAddressTranslator> addressTranslator;
@property (readonly, nonatomic) id<CRKTimerPrimitives> timerPrimitives;
@property (readonly, nonatomic) CATOperationQueue *operationQueue;

+ (id)fetchOperationTimerIdentifier;

- (void).cxx_destruct;
- (id)initWithIDSPrimitives:(id)a0 addressTranslator:(id)a1 operationQueue:(id)a2;
- (id)initWithIDSPrimitives:(id)a0 addressTranslator:(id)a1 timerPrimitives:(id)a2 operationQueue:(id)a3;
- (id)operationToFetchCertificateForDestinationAppleID:(id)a0 sourceAppleID:(id)a1 destinationDeviceIdentifier:(id)a2 controlGroupIdentifier:(id)a3 sourceRole:(long long)a4 destinationRole:(long long)a5 requesterCertificate:(id)a6 timeout:(double)a7;

@end
