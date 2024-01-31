@interface CalDAVCalendarInfoTaskGroup : CoreDAVContainerInfoTaskGroup

@property (nonatomic) BOOL fetchSharees;

- (id)_copyContainerWithURL:(id)a0 andProperties:(id)a1;
- (id)_copyContainerParserMappings;
- (id)initWithAccountInfoProvider:(id)a0 containerURLs:(id)a1 taskManager:(id)a2;
- (id)containerForURL:(id)a0;

@end
