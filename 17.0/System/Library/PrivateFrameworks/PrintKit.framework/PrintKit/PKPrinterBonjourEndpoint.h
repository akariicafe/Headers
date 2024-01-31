@class NSString, NSDictionary, NSURL, NWEndpoint, NSArray;

@interface PKPrinterBonjourEndpoint : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_resolvedCallouts;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NWEndpoint *nwEndpoint;
@property (retain) NSURL *resolvedURL;
@property (retain) NSDictionary *resolvedTXT;
@property (readonly) NSString *persistentNameRepresentationForPrintKitUI;
@property (readonly) NSString *displayNameForPrintKitUI;
@property (readonly) BOOL isIPPS;
@property (readonly) int provenance;

+ (id)endpointWithBonjourString:(id)a0;
+ (id)endpointWithData:(id)a0;
+ (id)endpointWithURL:(id)a0;
+ (id)serviceFromEndpoint:(id)a0;

- (id)dataRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_resolveEndpoint:(id /* block */)a0;
- (void)_resolve_finish_resolvedURL:(id)a0 resolvedTXT:(id)a1;
- (id)initWithBonjourString:(id)a0 provenance:(int)a1;
- (id)initWithEndpoint:(id)a0 provenance:(int)a1;
- (id)initWithURL:(id)a0 txtRecord:(id)a1 provenance:(int)a2;
- (void)withResolvedTXT:(id /* block */)a0;
- (void)withResolvedURL:(id /* block */)a0;

@end
