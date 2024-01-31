@class NSString;

@interface _SVDMutableSpeakerCapability : SVDSpeakerCapability <SVDSpeakerCapabilityMutating>

@property (nonatomic) long long status;
@property (nonatomic) long long qualityScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSupportStatus:(long long)a0;

@end
