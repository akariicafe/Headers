@class NSString;

@interface CoreODI.ODISessionInternal : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ _pendingFeedback;
    void /* unknown type, empty encoding */ _odnator;
    void /* unknown type, empty encoding */ _odnAtorSessionId;
    void /* unknown type, empty encoding */ $__lazy_storage_$__bindingsManager;
    void /* unknown type, empty encoding */ _locationBundle;
    void /* unknown type, empty encoding */ _locationBundleIdentifier;
    void /* unknown type, empty encoding */ _lastAssessmentTimedOut;
    void /* unknown type, empty encoding */ _armandDataFiller;
    void /* unknown type, empty encoding */ _serviceIdentifier;
    void /* unknown type, empty encoding */ _dsidType;
    void /* unknown type, empty encoding */ sessionIdentifier;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ profileDeviceDataFields;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fallbackFields;
    void /* unknown type, empty encoding */ cachedFields;
    void /* unknown type, empty encoding */ setODNAtorTask;
    void /* unknown type, empty encoding */ cacheDeviceFieldsTask;
    void /* unknown type, empty encoding */ sessionState;
    void /* unknown type, empty encoding */ CORE_ODI_MAX_INIT_TIME;
    void /* unknown type, empty encoding */ CORE_ODI_MAX_WAIT_TIME;
    void /* unknown type, empty encoding */ CORE_ODI_MIN_WAIT_TIME;
    void /* unknown type, empty encoding */ CORE_ODI_RAW_WAIT_TIME;
    void /* unknown type, empty encoding */ CORE_ODI_BAA_CERT_MAX_TIME;
    void /* unknown type, empty encoding */ CORE_ODI_SEND_OTD_AFTER_SECONDS_IF_NO_ASSESSMENT;
    void /* unknown type, empty encoding */ authorizedDsidTypes;
    void /* unknown type, empty encoding */ authorizedServices;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)updateWithAdditionalAttributes:(id)a0;
- (void)getAssessment:(id /* block */)a0;
- (void)provideFeedbackOnPayloadOutcome:(unsigned long long)a0;
- (id)initWithServiceIdentifier:(id)a0 forDSIDType:(unsigned long long)a1 locationBundle:(id)a2 andLocationBundleIdentifier:(id)a3;

@end
