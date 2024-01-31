@class CLPCReportingSchema, NSArray;

@interface CLPCReportingRows : NSObject

@property (retain, nonatomic) CLPCReportingSchema *schema;
@property (retain, nonatomic) NSArray *rows;

- (id)init;
- (void).cxx_destruct;

@end
