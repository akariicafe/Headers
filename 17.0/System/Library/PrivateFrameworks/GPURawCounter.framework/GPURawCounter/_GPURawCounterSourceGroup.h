@class NSString, NSArray, NSDictionary;

@interface _GPURawCounterSourceGroup : NSObject <GPURawCounterSourceGroup>

@property (readonly) NSString *name;
@property (readonly) NSArray *sourceList;
@property (readonly) unsigned int acceleratorPort;
@property unsigned long long samplingPeriodInMicroseconds;
@property unsigned long long samplingTriggers;
@property (copy) NSDictionary *vendorOptions;
@property (copy) NSDictionary *options;
@property (readonly, copy) NSDictionary *features;
@property (readonly) unsigned long long sampleMarker;
@property (readonly) unsigned long long availableCounterTriggers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAcceleratorPort:(unsigned int)a0;
- (void)dealloc;
- (BOOL)stopSampling;
- (void)setVendorOptions:(id)a0;
- (BOOL)startSampling;
- (id)subDivideCounterList:(id)a0 withOptions:(id)a1;
- (id)vendorOptions;

@end
