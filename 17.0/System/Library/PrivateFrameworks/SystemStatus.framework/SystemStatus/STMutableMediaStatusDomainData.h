@class NSArray, NSSet, NSString, STMutableListData;

@interface STMutableMediaStatusDomainData : STMediaStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (readonly, copy, nonatomic) STMutableListData *audioRecordingAttributionListData;
@property (readonly, copy, nonatomic) STMutableListData *mutedAudioRecordingAttributionListData;
@property (readonly, copy, nonatomic) STMutableListData *cameraAttributionListData;
@property (copy, nonatomic) NSArray *cameraAttributions;
@property (copy, nonatomic) NSArray *audioRecordingAttributionList;
@property (copy, nonatomic) NSArray *mutedAudioRecordingAttributionList;
@property (copy, nonatomic) NSArray *cameraCaptureAttributionList;
@property (copy, nonatomic) NSSet *audioRecordingAttributions;
@property (copy, nonatomic) NSSet *mutedAudioRecordingAttributions;
@property (copy, nonatomic) NSSet *cameraCaptureAttributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)applyDiff:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAudioRecordingAttributions:(id)a0;
- (void)setMutedAudioRecordingAttributions:(id)a0;
- (void)setCameraCaptureAttributions:(id)a0;
- (void)setAudioRecordingAttributionList:(id)a0;
- (void)setCameraAttributions:(id)a0;
- (void)setMutedAudioRecordingAttributionList:(id)a0;
- (void)removeCameraCaptureAttribution:(id)a0;
- (void)addAudioRecordingAttribution:(id)a0;
- (void)addCameraAttribution:(id)a0;
- (void)addCameraCaptureAttribution:(id)a0;
- (void)addMutedAudioRecordingAttribution:(id)a0;
- (id)initWithAudioRecordingAttributionListData:(id)a0 mutedAudioRecordingAttributionListData:(id)a1 cameraAttributionListData:(id)a2;
- (void)removeAudioRecordingAttribution:(id)a0;
- (void)removeCameraAttribution:(id)a0;
- (void)removeMutedAudioRecordingAttribution:(id)a0;
- (void)setCameraCaptureAttributionList:(id)a0;

@end
