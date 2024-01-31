@protocol ObjcQOSErrorMessageProtocolInternal;

@interface QOSErrorMessage : NSObject

@property (readonly) id<ObjcQOSErrorMessageProtocolInternal> underlyingObject;

- (void).cxx_destruct;
- (void)fetchLocalizedErrorMessageForItems:(id)a0 usingError:(id)a1 completionHandler:(id /* block */)a2;
- (id)getLocalizedErrorMessageForItems:(id)a0 usingError:(id)a1;
- (id)initWithConfig:(id)a0 logger:(id /* block */)a1 metricsRecorder:(id /* block */)a2 defaultAlert:(id /* block */)a3;

@end
