@interface WKGeolocationProviderIOS : NSObject {
    struct RefPtr<WebKit::WebGeolocationManagerProxy, WTF::RawPtrTraits<WebKit::WebGeolocationManagerProxy>, WTF::DefaultRefDerefTraits<WebKit::WebGeolocationManagerProxy>> { struct WebGeolocationManagerProxy *m_ptr; } _geolocationManager;
    struct RetainPtr<id<_WKGeolocationCoreLocationProvider>> { void *m_ptr; } _coreLocationProvider;
    BOOL _isWebCoreGeolocationActive;
    struct RefPtr<WebKit::WebGeolocationPosition, WTF::RawPtrTraits<WebKit::WebGeolocationPosition>, WTF::DefaultRefDerefTraits<WebKit::WebGeolocationPosition>> { struct WebGeolocationPosition *m_ptr; } _lastActivePosition;
    struct Deque<GeolocationRequestData, 0UL> { unsigned long long m_start; unsigned long long m_end; struct VectorBuffer<GeolocationRequestData, 0UL, WTF::FastMalloc> { struct GeolocationRequestData *m_buffer; unsigned int m_capacity; unsigned int m_size; } m_buffer; } _requestsWaitingForCoreLocationAuthorization;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)errorOccurred:(id)a0;
- (void)geolocationAuthorizationGranted;
- (void)_setEnableHighAccuracy:(BOOL)a0;
- (void)_startUpdating;
- (void)_stopUpdating;
- (void)decidePolicyForGeolocationRequestFromOrigin:(void *)a0 completionHandler:(void *)a1 view:(id)a2;
- (void)geolocationAuthorizationDenied;
- (id)initWithProcessPool:(void *)a0;
- (void)positionChanged:(id)a0;
- (void)resetGeolocation;

@end
