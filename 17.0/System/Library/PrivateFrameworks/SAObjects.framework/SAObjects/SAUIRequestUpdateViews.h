@class NSArray, NSNumber;

@interface SAUIRequestUpdateViews : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSNumber *timeInSeconds;
@property (copy, nonatomic) NSArray *viewIds;

+ (id)requestUpdateViews;
+ (id)requestUpdateViewsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
