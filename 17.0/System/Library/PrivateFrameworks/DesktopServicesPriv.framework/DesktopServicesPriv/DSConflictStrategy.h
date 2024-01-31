@class NSString, NSMutableDictionary;

@interface DSConflictStrategy : NSObject

@property (retain, nonatomic) NSMutableDictionary *localizedTitlesByResolution;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ conflictHandler;
@property (copy, nonatomic) NSString *localizedAlertTitle;
@property (copy, nonatomic) NSString *localizedAlertMessageFormat;

- (void)validate;
- (id)init;
- (void).cxx_destruct;
- (id)localizedAlertMessageForSourceFileURL:(id)a0;
- (id)localizedTitleForResolution:(unsigned long long)a0;
- (void)setLocalizedTitle:(id)a0 forResolution:(unsigned long long)a1;

@end
