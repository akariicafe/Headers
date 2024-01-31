@class CTTelephonyNetworkInfo, NSString;

@interface CTTelephonyNetworkInfoDelegatePlus : NSObject <CoreTelephonyClientDataDelegateInternal>

@property (weak, nonatomic) CTTelephonyNetworkInfo *delegate;
@property (nonatomic) struct queue { struct object { struct dispatch_object_s *fObj; } fObj; } clientQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;

@end
