@class NSMutableData;

@interface DEDataWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSMutableData *data;

- (void)close;
- (id)init;
- (void).cxx_destruct;
- (void)writeData:(id)a0;

@end
