@class ATXHeuristicDevice;

@interface ATXContactsDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (void)contactsWithPhone:(id)a0 callback:(id /* block */)a1;
- (void)contactsWithIdentifiers:(id)a0 callback:(id /* block */)a1;
- (void)contactsWithName:(id)a0 callback:(id /* block */)a1;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)contactsWithEmail:(id)a0 callback:(id /* block */)a1;
- (void)_contactsWithPredicate:(id)a0 callback:(id /* block */)a1;

@end
