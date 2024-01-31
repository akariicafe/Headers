@class NSString, RPRemoteDisplayPerson;

@interface _DDUIArtificialPerson : NSObject <DDUIPerson>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) RPRemoteDisplayPerson *rapportPerson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
