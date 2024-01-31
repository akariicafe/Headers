@class NSArray;

@interface WFTrelloAccessResource : WFAccountAccessResource

@property (readonly, copy, nonatomic) NSArray *accounts;

+ (id)userInterfaceClasses;
+ (id)userInterfaceProtocol;

- (Class)accountClass;
- (id)associatedAppIdentifier;
- (void)makeAvailableWithRemoteInterface:(id)a0 completionHandler:(id /* block */)a1;

@end
