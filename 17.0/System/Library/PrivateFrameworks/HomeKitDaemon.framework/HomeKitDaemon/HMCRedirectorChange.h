@class NSSet, NSString;

@interface HMCRedirectorChange : HMFObject

@property (readonly) NSSet *updates;
@property (readonly) NSSet *inserts;
@property (readonly) NSSet *deletes;
@property (readonly) NSString *context;
@property (readonly) NSString *author;

- (id)description;
- (void).cxx_destruct;
- (id)descriptionLines;
- (void)dumpForLoggingWithPrefix:(id)a0 logType:(unsigned char)a1;

@end
