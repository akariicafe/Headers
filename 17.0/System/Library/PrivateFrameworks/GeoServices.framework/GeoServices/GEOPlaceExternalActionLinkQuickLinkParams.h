@class NSURL, NSString, GEOPDQuickLinkActionDataParams;

@interface GEOPlaceExternalActionLinkQuickLinkParams : NSObject {
    GEOPDQuickLinkActionDataParams *_quickLinkParams;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *appAdamId;

- (void).cxx_destruct;
- (id)initWithQuickLinkParams:(id)a0;

@end
