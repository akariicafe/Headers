@class NSString, NSArray, GEOPDModuleLayoutEntry;
@protocol GEOModuleConfigurationProvider;

@interface GEOModuleLayoutEntry : NSObject {
    GEOPDModuleLayoutEntry *_moduleLayoutEntry;
    id<GEOModuleConfigurationProvider> _moduleConfigProvider;
}

@property (readonly, nonatomic) NSString *debugName;
@property (readonly, nonatomic) NSArray *modules;

+ (id)moduleLayoutEntryFromArray:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)_performPostCheckForModules:(id)a0;
- (id)initWithModuleLayoutEntry:(id)a0 moduleConfigProvider:(id)a1;

@end
