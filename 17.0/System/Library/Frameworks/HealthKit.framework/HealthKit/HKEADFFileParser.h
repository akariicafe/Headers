@class NSData;

@interface HKEADFFileParser : NSObject

@property (retain, nonatomic) NSData *data;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)payloadInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_enumerateHeadersWithHandler:(id /* block */)a0;
- (void)enumerateChannelsWithHandler:(id /* block */)a0;
- (id)newBuilderWithStartDate:(id)a0;

@end
