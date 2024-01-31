@class NSData;

@interface VUIDataImageDescriptor : NSObject

@property (readonly, nonatomic) NSData *data;
@property (nonatomic, getter=isTemplated) BOOL templated;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
