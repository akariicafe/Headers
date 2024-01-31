@class NSString;
@protocol CADSpotlightIndexProvider;

@interface CADFullLoggingSpotlightIndexProvider : NSObject <CADSpotlightIndexProvider> {
    id<CADSpotlightIndexProvider> _wrappedProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (id)newSpotlightIndexForBundleID:(id)a0;

@end
