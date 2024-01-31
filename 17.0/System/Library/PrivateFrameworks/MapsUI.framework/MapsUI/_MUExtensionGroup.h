@class NSMutableArray, NSString, geo_isolater, GEOAppleMediaServicesResult, _MXExtension;

@interface _MUExtensionGroup : NSObject {
    NSMutableArray *_extensions;
    geo_isolater *_extensionsLock;
}

@property (readonly, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) _MXExtension *bestExtensionToUse;
@property (retain, nonatomic) GEOAppleMediaServicesResult *appStoreApp;

- (id)initWithAppIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)addExtensionIfMatchedAppIdentifier:(id)a0;

@end
