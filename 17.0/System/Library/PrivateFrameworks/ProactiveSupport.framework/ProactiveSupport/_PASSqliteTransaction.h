@interface _PASSqliteTransaction : NSObject

+ (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithHandle:(id)a0 failableBlock:(id /* block */)a1;
+ (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithHandle:(id)a0 failableBlock:(id /* block */)a1;
+ (void)writeTransactionWithHandle:(id)a0 block:(id /* block */)a1;
+ (void)readTransactionWithHandle:(id)a0 block:(id /* block */)a1;

- (id)init;

@end
