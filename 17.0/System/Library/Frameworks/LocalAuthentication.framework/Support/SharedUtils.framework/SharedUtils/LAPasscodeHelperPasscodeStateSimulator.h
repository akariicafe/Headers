@class NSString;

@interface LAPasscodeHelperPasscodeStateSimulator : NSObject <LAPasscodeHelperPasscodeState>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)passcodeType;
- (BOOL)isPasscodeSet;

@end
