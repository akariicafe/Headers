@class NSString;
@protocol SXDebugAdvertisementSettingsProvider, SXDocumentProviding;

@interface SXAdvertisingSettingsFactory : NSObject <SXAdvertisingSettingsFactory>

@property (readonly, nonatomic) id<SXDocumentProviding> documentProvider;
@property (readonly, nonatomic) id<SXDebugAdvertisementSettingsProvider> debugSettingsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createAdvertisingSettingsWithDOMObjectProvider:(id)a0;
- (id)initWithDocumentProvider:(id)a0 debugSettingsProvider:(id)a1;

@end
