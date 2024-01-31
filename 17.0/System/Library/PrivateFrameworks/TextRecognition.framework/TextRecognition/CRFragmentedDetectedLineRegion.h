@class NSArray, NSString;

@interface CRFragmentedDetectedLineRegion : CRDetectedLineRegion <CRWritableFragmentedRegion, CRFragmentedRegion>

@property (retain) NSArray *regionFragments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
