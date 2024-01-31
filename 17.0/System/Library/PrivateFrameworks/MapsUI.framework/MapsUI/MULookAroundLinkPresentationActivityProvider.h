@class NSString, LPLinkMetadata;

@interface MULookAroundLinkPresentationActivityProvider : MUPlaceActivityProvider <UIActivityItemLinkPresentationSource> {
    LPLinkMetadata *_cachedMetadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityViewControllerLinkPresentationMetadata:(id)a0;
- (id)mapMetadataSpecialization;

@end
