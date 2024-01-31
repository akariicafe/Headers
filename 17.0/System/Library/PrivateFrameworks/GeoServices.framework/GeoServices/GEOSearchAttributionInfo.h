@class NSString, NSArray, GEOSearchAttributionSource;

@interface GEOSearchAttributionInfo : NSObject <NSSecureCoding> {
    NSArray *_logoPaths;
    NSArray *_snippetLogoPaths;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) GEOSearchAttributionSource *source;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) unsigned int requirementsMask;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *captionDisplayName;
@property (readonly, nonatomic) BOOL shouldOpenInAppStore;
@property (readonly, nonatomic) NSString *webBaseActionURL;
@property (readonly, nonatomic) NSArray *attributionApps;
@property (readonly, nonatomic) NSString *appAdamID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)initWithSource:(id)a0 localizedAttribution:(id)a1 logoPaths:(id)a2 snippetLogoPaths:(id)a3;
- (void)addLogoPath:(id)a0;
- (BOOL)hasAttributionRequirement:(int)a0;
- (id)logoPathForScale:(double)a0;
- (id)snippetLogoPathForScale:(double)a0;
- (BOOL)supportsActionURLs;

@end
