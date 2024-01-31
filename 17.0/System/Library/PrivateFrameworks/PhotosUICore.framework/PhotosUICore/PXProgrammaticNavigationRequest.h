@class PXProgrammaticNavigationDestination;

@interface PXProgrammaticNavigationRequest : NSObject

@property (readonly, nonatomic) PXProgrammaticNavigationDestination *destination;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
