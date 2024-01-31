@class NSDate;

@interface SALCMVodViewingContext : SALCMViewingContext

@property (copy, nonatomic) NSDate *originalEventStartTime;

+ (id)vodViewingContext;
+ (id)vodViewingContextWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
