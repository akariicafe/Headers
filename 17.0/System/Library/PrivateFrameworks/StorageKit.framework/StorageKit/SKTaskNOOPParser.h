@class NSString;

@interface SKTaskNOOPParser : NSObject <SKTaskDataParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parseData:(id)a0;

@end
