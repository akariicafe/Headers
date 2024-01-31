@class NSString;

@interface MRIRNode : NSObject <MRRouteNodeRepresentable>

@property (retain, nonatomic) NSString *avOutputDeviceIdentifier;
@property (retain, nonatomic) NSString *rapportIdentifier;
@property (retain, nonatomic) NSString *idsIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
