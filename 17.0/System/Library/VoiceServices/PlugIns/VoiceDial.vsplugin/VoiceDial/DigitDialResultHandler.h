@class TUContactsDataProvider, NSString;

@interface DigitDialResultHandler : NSObject <VSRecognitionResultHandler>

@property (retain, nonatomic) TUContactsDataProvider *contactsDataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)actionForRecognitionResult:(id)a0;

@end
