@class NSString;

@interface HMDAccessCodeManagerUtilities : HMFObject <HMDAccessCodeManagerUtilitiesProtocol, HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)filteredFetchResponses:(id)a0 forUser:(id)a1;
+ (id)addedAccessoryAccessCodesFromModificationResponses:(id)a0;
+ (BOOL)allModificationRequests:(id)a0 areAddingAccessCode:(id)a1;
+ (BOOL)anyModificationFailed:(id)a0;
+ (id)removedAccessoryAccessCodesFromModificationResponses:(id)a0;
+ (id)updatedAccessoryAccessCodesFromModificationResponses:(id)a0;


@end
