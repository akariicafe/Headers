@class NSString;

@interface EXBMirroredDisplayControllerProvider : NSObject <EXBDisplayControllerProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)displayControllerForDisplay:(id)a0 configuration:(id)a1;

@end
