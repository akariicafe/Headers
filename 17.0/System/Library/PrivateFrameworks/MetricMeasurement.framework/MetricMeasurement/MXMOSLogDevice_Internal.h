@class NSString, OSLogDevice;

@interface MXMOSLogDevice_Internal : NSObject <MXMProbeableDevice>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) OSLogDevice *rawDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 identifier:(id)a1;
- (id)initWithOSLogDevice:(id)a0;

@end
