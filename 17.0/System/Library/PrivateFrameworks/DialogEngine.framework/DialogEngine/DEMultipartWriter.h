@class NSObject;
@protocol DEWriter;

@interface DEMultipartWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSObject<DEWriter> *writer;
@property (nonatomic) BOOL partClosed;

- (void)close;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)writeData:(id)a0;
- (id)initWithWriter:(id)a0;
- (void)newPart;
- (void)closeMessage;

@end
