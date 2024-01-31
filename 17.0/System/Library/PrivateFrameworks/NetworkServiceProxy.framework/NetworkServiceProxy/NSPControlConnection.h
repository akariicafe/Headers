@interface NSPControlConnection : NSObject

@property (readonly) unsigned long long flowIdentifier;

- (id)initFromMetadata:(id)a0;
- (id)initFromStream:(id)a0;
- (void)fetchConnectionInfoWithCompletionHandler:(id /* block */)a0;
- (id)initFromConnection:(id)a0;
- (id)initFromNWConnection:(id)a0;
- (id)initFromTask:(id)a0;

@end
