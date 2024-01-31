@class NSString;

@interface WebCLLocationManager : NSObject <CLLocationManagerDelegate> {
    struct RetainPtr<CLLocationManager> { void *m_ptr; } _locationManager;
    struct Client { void /* function */ **x0; } *_client;
    struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } _websiteIdentifier;
    BOOL _isWaitingForAuthorization;
    BOOL _mode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id).cxx_construct;
- (void)stop;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)initWithWebsiteIdentifier:(const void *)a0 client:(struct Client { void /* function */ **x0; } *)a1 mode:(BOOL)a2;
- (void)setEnableHighAccuracy:(BOOL)a0;

@end
