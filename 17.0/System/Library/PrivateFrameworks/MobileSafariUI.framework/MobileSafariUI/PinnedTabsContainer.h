@class NSString;

@interface PinnedTabsContainer : NSObject <PinnedTabsContainer>

@property (readonly, nonatomic, getter=isPrivateBrowsingEnabled) BOOL privateBrowsingEnabled;
@property (readonly, nonatomic) BOOL isInDefaultProfile;
@property (readonly, copy, nonatomic) NSString *activeProfileIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerWithActiveProfileIdentifier:(id)a0;
+ (id)containerWithPrivateBrowsing:(BOOL)a0;

- (void).cxx_destruct;

@end
