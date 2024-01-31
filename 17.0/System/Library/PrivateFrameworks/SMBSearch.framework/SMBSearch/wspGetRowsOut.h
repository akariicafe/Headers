@class searchResults, wspHeader, wspContext;

@interface wspGetRowsOut : NSObject

@property (retain) wspHeader *whdr;
@property (retain) wspContext *wctx;
@property unsigned int rowsReturned;
@property (retain) searchResults *results;

- (void).cxx_destruct;
- (int)decodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (id)initWithCtx:(id)a0;

@end
