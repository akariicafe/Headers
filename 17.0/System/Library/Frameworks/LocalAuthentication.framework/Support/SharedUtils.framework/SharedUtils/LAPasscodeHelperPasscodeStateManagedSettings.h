@class NSString;

@interface LAPasscodeHelperPasscodeStateManagedSettings : NSObject <LAPasscodeHelperPasscodeState>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)passcodeType;
- (BOOL)isPasscodeSet;
- (id)_mcProfileConnection;

@end
