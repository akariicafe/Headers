@class NSDictionary, NSError, QOSAlertMessageInternal;

@interface QOSToolkit.TVPlaybackErrorMessage : _TtCs12_SwiftObject <ObjcQOSErrorMessageProtocolInternal> {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ metricsRecorder;
    void /* unknown type, empty encoding */ defaultAlert;
    void /* unknown type, empty encoding */ service;
}

@property (nonatomic, readonly) id /* block */ logger;
@property (nonatomic, readonly) id /* block */ metricsRecorder;
@property (nonatomic, readonly) id /* block */ defaultAlert;

- (void)fetchLocalizedErrorMessageForItems:(NSDictionary *)a0 :(NSError *)a1 completionHandler:(void (^)(QOSAlertMessageInternal *))a2;
- (id)getLocalizedErrorMessageForItems:(id)a0 :(id)a1;

@end
