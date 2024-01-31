@class NSString;

@interface CalDAVCalendarServerChangedParameterItem : CoreDAVItemWithNoChildren

@property (retain, nonatomic) NSString *nameAttribute;
@property (retain, nonatomic) NSString *typeAttribute;

- (void).cxx_destruct;
- (void)parserFoundAttributes:(id)a0;

@end
