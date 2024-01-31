@class NSString, NSArray;

@interface DigitDialResultValidator : NSObject <VSRecognitionResultValidator> {
    NSArray *_deviceExceptions;
    NSArray *_networkExceptions;
}

@property (retain, nonatomic) NSString *deviceCountryCode;
@property (retain, nonatomic) NSString *networkCountryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_copyExceptionsForCountryCode:(id)a0;
- (BOOL)_hasMinimumNumberOfDigits:(id)a0 countryCode:(id)a1;
- (BOOL)_isValidExceptionForDevice:(id)a0;
- (BOOL)_isValidExceptionForNetwork:(id)a0;
- (unsigned long long)indexOfValidPhoneNumber:(id)a0;
- (id)validRecognitionResultFromRecognitionResult:(id)a0;

@end
