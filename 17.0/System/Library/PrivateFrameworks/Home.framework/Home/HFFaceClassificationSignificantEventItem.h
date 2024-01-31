@class HMPersonManager, HMHome, HMFaceClassification, UIImage, NSString, HMPerson;

@interface HFFaceClassificationSignificantEventItem : HFCameraClipSignificantEventItem <HFPersonLikeItem>

@property (retain, nonatomic) UIImage *faceCropImage;
@property (readonly, copy, nonatomic) HMFaceClassification *faceClassification;
@property (readonly, copy, nonatomic) HMPerson *person;
@property (readonly, nonatomic) HMPersonManager *personManager;
@property (readonly, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dateFormatter;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithSignificantEvent:(id)a0 home:(id)a1;

@end
