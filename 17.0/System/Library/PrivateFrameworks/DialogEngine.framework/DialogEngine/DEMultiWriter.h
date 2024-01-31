@class NSArray, NSMutableData;

@interface DEMultiWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSArray *writers;
@property (retain, nonatomic) NSMutableData *data;

- (void)close;
- (id)init;
- (void).cxx_destruct;
- (void)writeData:(id)a0;
- (id)initWithWriters:(id)a0;

@end
