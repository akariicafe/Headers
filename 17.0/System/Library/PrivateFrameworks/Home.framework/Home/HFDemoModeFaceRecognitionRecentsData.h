@class HMFaceCrop, NSUUID, HMPerson;

@interface HFDemoModeFaceRecognitionRecentsData : NSObject

@property (retain, nonatomic) HMPerson *person;
@property (retain, nonatomic) HMFaceCrop *faceCrop;
@property (retain, nonatomic) NSUUID *uuid;

- (void).cxx_destruct;
- (id)initWithPerson:(id)a0 faceCrop:(id)a1;

@end
