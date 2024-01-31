@class NSString;

@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection

@property (copy) NSString *runtimeCollectionClassName;
@property BOOL addsContentToExistingCollection;

- (void)encodeWithCoder:(id)a0;
- (void)connect;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)connectForSimulator;
- (void)performConnect;

@end
