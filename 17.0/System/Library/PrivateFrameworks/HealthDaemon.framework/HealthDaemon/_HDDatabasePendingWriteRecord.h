@interface _HDDatabasePendingWriteRecord : NSObject {
    id /* block */ _writeBlock;
    id /* block */ _completion;
}

- (id)init;
- (void).cxx_destruct;

@end
