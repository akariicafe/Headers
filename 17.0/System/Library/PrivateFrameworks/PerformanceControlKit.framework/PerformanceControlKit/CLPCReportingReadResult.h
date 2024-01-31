@class CLPCReportingRows;

@interface CLPCReportingReadResult : NSObject {
    struct array<CLPCReportingRows *, 7UL> { CLPCReportingRows *__elems_[7]; } rows_by_schema;
}

- (void)enumerate:(id /* block */)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)hasRowsForSchemaID:(unsigned long long)a0 error:(id *)a1;
- (id)rowsForSchemaID:(unsigned long long)a0 error:(id *)a1;

@end
