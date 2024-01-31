@class NSData, NSMutableData, NSString;

@interface SKTaskLineParser : NSObject <SKTaskDataParser>

@property (class, readonly) NSData *lineData;

@property (retain) NSMutableData *buffer;
@property (copy) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCallback:(id /* block */)a0;

@end
