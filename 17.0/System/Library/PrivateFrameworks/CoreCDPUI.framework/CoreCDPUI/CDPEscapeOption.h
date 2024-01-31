@class NSString;

@interface CDPEscapeOption : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleLocalizationKey;
@property (copy, nonatomic) NSString *titleTelemetryKey;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) id /* block */ escapeAction;
@property (copy, nonatomic) id /* block */ canShowEscapeOption;
@property (copy, nonatomic) NSString *progressTitle;
@property (copy, nonatomic) NSString *progressLabel;

+ (id)cancelOption;
+ (id)okOption;

- (void).cxx_destruct;

@end
