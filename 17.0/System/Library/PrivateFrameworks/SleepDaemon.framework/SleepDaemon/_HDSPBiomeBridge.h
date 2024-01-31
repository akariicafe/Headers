@class NSString, BMBiomeScheduler;

@interface _HDSPBiomeBridge : NSObject <HDSPBiomeInterface>

@property (readonly, nonatomic) BMBiomeScheduler *scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
