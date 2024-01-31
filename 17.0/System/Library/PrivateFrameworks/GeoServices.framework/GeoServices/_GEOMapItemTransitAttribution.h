@class NSArray, NSString, GEOPDTransitAttribution;

@interface _GEOMapItemTransitAttribution : NSObject <GEOTransitAttribution> {
    GEOPDTransitAttribution *_transitAttribution;
}

@property (readonly, nonatomic, getter=_providerNames) NSArray *providerNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTransitAttribution:(id)a0;

@end
