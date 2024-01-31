@class NSArray;

@interface NWPHHandler : NSObject

@property (retain) NSArray *allowedEntitlementGroup;
@property void /* function */ *handlerFunction;

- (id)initWithHandlerFunction:(void /* function */ *)a0 allowedEntitlementGroup:(id)a1;
- (void).cxx_destruct;

@end
