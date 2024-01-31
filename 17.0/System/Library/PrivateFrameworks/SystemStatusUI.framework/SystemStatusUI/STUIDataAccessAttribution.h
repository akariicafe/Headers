@class NSDate, STLocationStatusDomainLocationAttribution, NSString, STMediaStatusDomainCameraCaptureAttribution, STAttributedEntity, STActivityAttribution;

@interface STUIDataAccessAttribution : NSObject <BSDescriptionProviding, NSCopying>

@property (readonly, nonatomic) unsigned long long dataAccessType;
@property (readonly, copy, nonatomic) STActivityAttribution *audioRecordingActivityAttribution;
@property (readonly, copy, nonatomic) STMediaStatusDomainCameraCaptureAttribution *cameraCaptureAttribution;
@property (readonly, copy, nonatomic) STLocationStatusDomainLocationAttribution *locationAttribution;
@property (readonly, copy, nonatomic) STAttributedEntity *attributedEntity;
@property (readonly, nonatomic, getter=isRecent) BOOL recent;
@property (readonly, copy, nonatomic) NSDate *accessStartDate;
@property (readonly, copy, nonatomic) NSDate *accessEndDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)initWithAudioRecordingActivityAttribution:(id)a0 recent:(BOOL)a1 startDate:(id)a2 endDate:(id)a3;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithLocationAttribution:(id)a0 recent:(BOOL)a1 startDate:(id)a2 endDate:(id)a3;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initWithCameraCaptureAttribution:(id)a0 recent:(BOOL)a1 startDate:(id)a2 endDate:(id)a3;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
