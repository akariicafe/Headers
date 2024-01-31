@class NSArray, NSString;

@interface HUVoiceSelectionDataManager : SUICVoiceSelectionDefaultDataManager

@property (retain, nonatomic) NSArray *listOfVoices;
@property (copy, nonatomic) NSString *inputLanguageCode;

- (void).cxx_destruct;
- (id)voicesForRecognitionLanguageCode:(id)a0 outputLanguageCode:(id)a1;
- (id)initWithInputLanguageCode:(id)a0 listOfVoices:(id)a1;

@end
