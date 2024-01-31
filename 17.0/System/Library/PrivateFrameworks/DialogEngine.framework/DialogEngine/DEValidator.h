@class NSString;

@interface DEValidator : NSObject

@property (retain, nonatomic) NSString *templateDir;

- (void).cxx_destruct;
- (id)jsonToResult:(id)a0;
- (id)validate:(id)a0 locale:(id)a1;
- (id)validateFile:(id)a0 locale:(id)a1;
- (id)validateString:(id)a0 localeString:(id)a1;
- (id)validateWithParams:(id)a0 locale:(id)a1;

@end
