@class HMPersonManager, HFDemoModeFaceRecognitionRecentsData, HMHome, NSString, HMPerson;

@interface HFDemoModeFaceRecognitionItem : HFItem <HFPersonLikeItem, NSCopying>

@property (copy, nonatomic) HFDemoModeFaceRecognitionRecentsData *demoRecentsEntry;
@property (readonly, copy, nonatomic) HMPerson *person;
@property (readonly, nonatomic) HMPersonManager *personManager;
@property (readonly, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dateFormatter;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithRecentsData:(id)a0 home:(id)a1;

@end
