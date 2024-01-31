@class NSString;

@interface MKHTTPContentDisposition : NSObject

@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *folder;
@property (copy, nonatomic) NSString *originalFilename;

- (void).cxx_destruct;
- (id)initWithHeaderValue:(id)a0;

@end
