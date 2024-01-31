@class NSArray, MXMDisplayDescriptor, NSString;
@protocol MXMDisplayProbePlatform;

@interface MXMProbeDisplay : MXMProbe <MXMDisplayProbePlatformDelegate> {
    id<MXMDisplayProbePlatform> _impl;
}

@property (class, readonly, nonatomic) NSArray *descriptors;
@property (class, readonly, nonatomic) MXMDisplayDescriptor *mainDescriptor;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)probe;
+ (id)probeWithDescriptor:(id)a0;

- (id)initWithDescriptor:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_beginUpdates;
- (void)_stopUpdates;
- (void)_didRecieveData:(id)a0;

@end
