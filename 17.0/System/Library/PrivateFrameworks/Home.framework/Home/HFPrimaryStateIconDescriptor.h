@class NSString;

@interface HFPrimaryStateIconDescriptor : NSObject <HFIconDescriptor>

@property (readonly, nonatomic) long long primaryState;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL shouldForceLTR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)a0;
- (id)initWithIdentifier:(id)a0 primaryState:(long long)a1;

@end
