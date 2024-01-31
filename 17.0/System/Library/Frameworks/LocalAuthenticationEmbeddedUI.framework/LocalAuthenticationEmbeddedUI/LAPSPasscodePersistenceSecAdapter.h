@interface LAPSPasscodePersistenceSecAdapter : NSObject

- (BOOL)verifyFixedLengthNumericPasscodeIsStrong:(id)a0;
- (BOOL)verifyVariableLengthAlphanumericPasscodeIsStrong:(id)a0;

@end
