@class NSArray;

@interface _BSSqlitePreparedCompoundStatement : BSSqlitePreparedStatement {
    NSArray *_statements;
}

- (void).cxx_destruct;
- (BOOL)executeWithBindings:(id)a0 resultRowHandler:(id /* block */)a1 error:(out id *)a2;

@end
