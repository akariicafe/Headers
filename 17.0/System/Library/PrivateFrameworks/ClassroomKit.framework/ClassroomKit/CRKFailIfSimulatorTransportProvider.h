@class NSError, NSString;
@protocol CRKTransportProviding;

@interface CRKFailIfSimulatorTransportProvider : NSObject <CRKTransportProviding>

@property (readonly, nonatomic) id<CRKTransportProviding> baseProvider;
@property (readonly, nonatomic) NSError *failureError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
