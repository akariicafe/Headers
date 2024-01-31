@class NSArray;

@interface _ML3MutableDatabaseConnectionPoolDiagnostic : _ML3DatabaseConnectionPoolDiagnostic

@property (copy, nonatomic) NSArray *readerAvailableConnections;
@property (copy, nonatomic) NSArray *readerBusyConnections;
@property (copy, nonatomic) NSArray *writerAvailableConnections;
@property (copy, nonatomic) NSArray *writerBusyConnections;

- (void)setReaderAvailableConnections:(id)a0;
- (void)setReaderBusyConnections:(id)a0;
- (void)setWriterAvailableConnections:(id)a0;
- (void)setWriterBusyConnections:(id)a0;

@end
