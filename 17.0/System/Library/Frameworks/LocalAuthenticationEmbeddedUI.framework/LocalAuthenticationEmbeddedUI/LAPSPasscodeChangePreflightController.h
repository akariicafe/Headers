@class NSString;
@protocol LAPSPasscodeChangeSystem;

@interface LAPSPasscodeChangePreflightController : NSObject <LAPSPasscodeChangePreflightController> {
    id<LAPSPasscodeChangeSystem> _system;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
