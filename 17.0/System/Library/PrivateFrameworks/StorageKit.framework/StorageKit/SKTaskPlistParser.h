@class NSData, NSMutableData, NSString;

@interface SKTaskPlistParser : NSObject <SKTaskDataParser>

@property (class, readonly) NSData *plistStartTag;
@property (class, readonly) NSData *plistEndTag;

@property (retain) NSMutableData *buffer;
@property struct _NSRange { unsigned long long location; unsigned long long length; } startRange;
@property (copy) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCallback:(id /* block */)a0;

@end
