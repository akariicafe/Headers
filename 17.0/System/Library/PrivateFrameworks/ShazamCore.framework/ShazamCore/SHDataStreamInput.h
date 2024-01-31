@class NSString;
@protocol SHDataStream;

@interface SHDataStreamInput : NSObject <SHDataStream>

@property (retain, nonatomic) id<SHDataStream> next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)closeWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)readFromURL:(id)a0 error:(id *)a1;
- (BOOL)loadDataFromURL:(id)a0 error:(id *)a1;
- (BOOL)processData:(id)a0 error:(id *)a1;

@end
