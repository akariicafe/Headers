@class NSString, VNRequestSpecifier;
@protocol VNObservationsRecipient;

@interface _VNImageAnalyzerMultiDetectorTilingObservationsRecipient : NSObject <VNObservationsRecipient> {
    id<VNObservationsRecipient> _observationsRecipient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;

- (void).cxx_destruct;
- (id)initWithObservationsRecipient:(id)a0;
- (void)receiveObservations:(id)a0;

@end
