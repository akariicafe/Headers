@class NSString, NSArray;

@interface DDActionNaturalLanguageContext : NSObject

@property (retain) NSString *leadingText;
@property (retain) NSString *trailingText;
@property (retain) struct __DDResult { } *result;
@property (retain) NSArray *associatedResults;
@property (retain) NSString *bundleIdentifier;

- (void)dealloc;
- (void).cxx_destruct;

@end
