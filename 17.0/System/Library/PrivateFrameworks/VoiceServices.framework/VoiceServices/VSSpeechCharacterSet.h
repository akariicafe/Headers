@class NSCharacterSet;

@interface VSSpeechCharacterSet : NSObject

@property (retain, nonatomic) NSCharacterSet *characterSet;

+ (id)languageMapping;

- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0;
- (id)unspeakableRangeOfText:(id)a0;

@end
