@class NSDictionary;

@interface CNFPendingDeepLinkRepresentation : NSObject

@property (retain, nonatomic) NSDictionary *resourceDictionary;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
