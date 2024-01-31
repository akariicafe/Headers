@class NSNumber;

@interface UniFakeImage : UniImage

@property (retain, nonatomic) NSNumber *fakeFormat;

+ (id)imageWithCIImage:(id)a0 format:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithCIImage:(id)a0 format:(unsigned long long)a1;

@end
