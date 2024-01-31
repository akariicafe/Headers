@class NSError;

@interface _PXSimulatedFailingMediaRequest : _PXSimulatedMediaRequest {
    NSError *_error;
    BOOL _didReturnError;
}

- (void).cxx_destruct;
- (void)handleOriginalResult:(id)a0 info:(id)a1;
- (id)initWithWrappedMediaRequest:(id)a0 error:(id)a1;

@end
