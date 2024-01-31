@class NSString;

@interface _bmFMStatement : NSObject

@property long long useCount;
@property (retain) NSString *query;
@property void *statement;
@property BOOL inUse;

- (void)close;
- (void)reset;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;

@end
