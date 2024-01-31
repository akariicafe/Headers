@class NSString, SFUITTRReportComponent;

@interface SFUITTRReport : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) SFUITTRReportComponent *component;

+ (id)peopleSuggestionReport;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 desc:(id)a1 component:(id)a2;

@end
