@class NSArray;

@interface WFDropboxAccessResource : WFAccountAccessResource

@property (readonly, copy, nonatomic) NSArray *accounts;

- (Class)accountClass;
- (id)initWithDefinition:(id)a0;
- (id)associatedAppIdentifier;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;

@end
