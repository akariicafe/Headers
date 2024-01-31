@class NSString;

@interface CMIInferenceNetworkIOPortEspressoV1 : NSObject <CMIInferenceNetworkIOPort>

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long depth;
@property (nonatomic) BOOL isInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)_getInfoFromNetwork:(struct { void *x0; int x1; })a0 portName:(id)a1 isInput:(BOOL)a2;

@end
