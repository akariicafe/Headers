@class NSNumber, NSURL, NSString;

@interface ISDefaults : NSObject

@property (retain) NSNumber *_usePerstentCache;
@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) BOOL _enableAppIconOverrides;
@property (readonly) BOOL _enable1016Icons;
@property (readonly) BOOL _ignoreDocumentClaimIcons;
@property (retain) NSURL *_cacheURL;
@property (readonly) BOOL usePerstentCache;
@property (readonly) NSURL *cacheURL;
@property (readonly) NSString *cacheSaltString;
@property (readonly) NSString *serviceName;
@property (readonly) BOOL defaultToTemplatizedAppIcons;
@property (readonly) BOOL allowDocumentClaimIcons;
@property (readonly) BOOL preferSymbolAsTemplateVariant;
@property (readonly) BOOL enableAppIconOverides;
@property (readonly) double prepareImageDelay;
@property (readonly) BOOL logMissingURLCacheProperties;

+ (id)sharedInstance;

- (BOOL)usePerstentCache;
- (id)init;
- (id)cacheURL;
- (id)debugISIconGraphicIconColor;
- (void).cxx_destruct;
- (id)debugGraphicIconColor;
- (id)debugPreDefinedGraphicIconColor;
- (BOOL)isDebugGraphicIconColourEnabled;

@end
