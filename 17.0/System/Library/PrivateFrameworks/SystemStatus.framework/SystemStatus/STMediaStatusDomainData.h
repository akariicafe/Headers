@class NSArray, NSSet, NSString, STListData;

@interface STMediaStatusDomainData : NSObject <BSDebugDescriptionProviding, STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STListData *audioRecordingAttributionListData;
@property (readonly, copy, nonatomic) STListData *mutedAudioRecordingAttributionListData;
@property (readonly, copy, nonatomic) STListData *cameraAttributionListData;
@property (readonly, copy, nonatomic) NSArray *cameraAttributions;
@property (readonly, copy, nonatomic) NSArray *audioRecordingAttributionList;
@property (readonly, copy, nonatomic) NSArray *mutedAudioRecordingAttributionList;
@property (readonly, copy, nonatomic) NSArray *cameraCaptureAttributionList;
@property (readonly, copy, nonatomic) NSSet *audioRecordingAttributions;
@property (readonly, copy, nonatomic) NSSet *mutedAudioRecordingAttributions;
@property (readonly, copy, nonatomic) NSSet *cameraCaptureAttributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)diffFromData:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)dataByApplyingDiff:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)_initWithAudioRecordingAttributionListData:(id)a0 mutedAudioRecordingAttributionListData:(id)a1 cameraAttributionListData:(id)a2;
- (id)camerasInUseMatchingAttribution:(id)a0;
- (id)initWithAudioRecordingAttributionListData:(id)a0 mutedAudioRecordingAttributionListData:(id)a1 cameraAttributionListData:(id)a2;

@end
